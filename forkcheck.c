#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>   // Required for wait()

int main() {
    int pid = fork();

    if (pid == 0) { 
        printf("I am child, my PID is %d\n", getpid()); 
        printf("My parent PID is: %d\n", getppid()); 
        sleep(2);  // Keep child alive for verification
    } 
    else if (pid > 0) { 
        printf("I am parent, my PID is %d\n", getpid()); 
        wait(NULL); 
    } 
    else {
        printf("Fork failed\n");
    }

    return 0;
}//C Program to create new process using Linux API system calls fork() and exit()
