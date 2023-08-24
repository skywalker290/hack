#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define NUM_PAIRS 2

int main() {
    int pipe_fds[NUM_PAIRS][2];  // Array to store pipe file descriptors

    // Create pipes for each pair of child processes
    for (int i = 0; i < NUM_PAIRS; i++) {
        if (pipe(pipe_fds[i]) == -1) {
            perror("Pipe creation failed");
            return 1;
        }
    }

    // Create child processes for each pair
    for (int i = 0; i < NUM_PAIRS; i++) {
        pid_t child_pid = fork();

        if (child_pid == 0) {
            // Child process
            close(pipe_fds[i][1]);  // Close write end in child
            int data;

            read(pipe_fds[i][0], &data, sizeof(int));
            printf("Child %d received: %d\n", i, data);

            close(pipe_fds[i][0]);
            return 0;
        }
    }

    // Parent process
    for (int i = 0; i < NUM_PAIRS; i++) {
        close(pipe_fds[i][0]);  // Close read end in parent
        int data = i * 100;

        write(pipe_fds[i][1], &data, sizeof(int));
        printf("Parent sent: %d\n", data);

        close(pipe_fds[i][1]);
    }

    // Wait for all child processes to complete
    for (int i = 0; i < NUM_PAIRS; i++) {
        wait(NULL);
    }

    return 0;
}
