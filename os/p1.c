#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();
    if (pid == 0) {
        nice(-5);
        for (int i = 0; i < 5; i++) {
            printf("Child process (high priority): %d\n", i);
            sleep(1);
        }
    } else {
        for (int i = 0; i < 5; i++) {
            printf("Parent process: %d\n", i);
            sleep(1);
        }
        wait(NULL);
    }
    return 0;
}
