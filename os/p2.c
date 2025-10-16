#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();
    if (pid == 0) {
        printf("Child Process ID: %d\t%d\n", getpid(), getppid());
        printf("Hello World\n");
    } else {
        printf("Parent Process ID: %d\n", getpid());
        printf("Hi\n");
    }
    return 0;
}
