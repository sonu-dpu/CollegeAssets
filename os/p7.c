#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();
    if (pid == 0) {
        execl("/bin/ls", "ls", NULL);
    } else {
        sleep(5);
        wait(NULL);
        printf("Parent process resumes after child execution.\n");
    }
    return 0;
}
