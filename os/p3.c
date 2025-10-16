#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();
    if (pid == 0) {
        printf("Child Process ID: %d\n", getpid());
        execlp("/bin/ls", "ls", NULL);
    } else {
        printf("Parent Process ID: %d\n", getpid());
        wait(NULL);
        printf("Child process finished, control returned to parent.\n");
    }
    return 0;
}
