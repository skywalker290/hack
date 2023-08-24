#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    printf("Original process (PID: %d)\n", getpid());

    pid_t child1 = fork();
    pid_t child2 = fork();
    pid_t child3 = fork();

    if (child1 < 0 || child2 < 0 || child3 < 0) {
        perror("Fork failed");
        return 1;
    } else if (child1 == 0 || child2 == 0 || child3 == 0) {
        printf("Child process (PID: %d)\n", getpid());
    } else {
        printf("Parent process (PID: %d)\n", getpid());
    }

    return 0;
}
