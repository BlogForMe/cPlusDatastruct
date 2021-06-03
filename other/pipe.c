//
// Created by mc on 21-5-18.
//
#if 0

#include <zconf.h>
#include <stdio.h>


int main(int argc, char *argv[]){
    int fd[2];
    // fd[0] - read
    // fd[1] - write
    if(pipe(fd)==1){
        printf("An  error occurred with opening the pipe\n");
    }
    int id  = fork();
#if 0
    if(id==0){
        int x;
        printf("Input a number");
        scanf("%d",&x);
        write(fd[1],&x, sizeof(int));
    } else{
        close(fd[1]);
        int y;
        read(fd[0],&y,sizeof(int));
        close(fd[0]);
        printf("Got from child process %d\n",y);
    }

#endif

    if(id>0){
        int x;
        printf("Input a number");
        scanf("%d",&x);
        write(fd[1],&x, sizeof(int));
    } else{
        close(fd[1]);
        int y;
        read(fd[0],&y,sizeof(int));
        close(fd[0]);
        printf("Got from parent process %d\n",y);
    }
    return 0;
}

#endif