#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();
    if (pid == 0) {
        sleep(5);
        printf("Child process ID: %d, Parent ID: %d\n", getpid(), getppid());
    } else {
        printf("Parent process ID: %d\n", getpid());
        sleep(2);
        printf("Parent exiting...\n");
    }
    return 0;
}
