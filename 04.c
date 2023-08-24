#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    int x = 10, y = 5;
    
    // Fork for ADD
    pid_t add_pid = fork();
    if (add_pid == 0) {
        int result = x + y;
        printf("Child (ADD): %d + %d = %d\n", x, y, result);
        return 0;
    }
    
    // Fork for SUB
    pid_t sub_pid = fork();
    if (sub_pid == 0) {
        int result = x - y;
        printf("Child (SUB): %d - %d = %d\n", x, y, result);
        return 0;
    }
    
    // Fork for MUL
    pid_t mul_pid = fork();
    if (mul_pid == 0) {
        int result = x * y;
        printf("Child (MUL): %d * %d = %d\n", x, y, result);
        return 0;
    }
    
    // Fork for DIV
    pid_t div_pid = fork();
    if (div_pid == 0) {
        int result = x / y;
        printf("Child (DIV): %d / %d = %d\n", x, y, result);
        return 0;
    }

    // Parent process
    printf("Parent waiting for child processes...\n");
    
    // Wait for all child processes to complete
    waitpid(add_pid, NULL, 0);
    waitpid(sub_pid, NULL, 0);
    waitpid(mul_pid, NULL, 0);
    waitpid(div_pid, NULL, 0);
    
    printf("All child processes completed.\n");
    
    return 0;
}
