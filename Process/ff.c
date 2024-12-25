#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void) {
    //printf("I am process %ld\n", (long)getpid());
    printf("My parent is %ld\n", (long)getppid());
    return 0;
}