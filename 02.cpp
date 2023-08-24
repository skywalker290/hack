#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    pid_t child_pid = fork();

    if (child_pid == 0) {
        // Child process
        printf("Child process\n");
    } else if (child_pid > 0) {
        // Parent process
        printf("Parent process\n");
    } else {
        // Fork failed
        perror("Fork failed");
        return 1;
    }

    return 0;
}
