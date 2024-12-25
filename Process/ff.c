// #include <stdio.h>
// #include <unistd.h>
// #include <sys/types.h>

// int main(void) {
//     //printf("I am process %ld\n", (long)getpid());
//     printf("My parent is %ld\n", (long)getppid());
//     return 0;
// }


// #include <stdio.h>
// #include <unistd.h>
// int main (void) {
// printf("I am process %ld\n", (long)getpid());// 3
// printf("My parent is %ld\n", (long)getppid());// 2
// return 0;
// }

// #include <stdio.h>
// #include <unistd.h>
// int main () {
//     int x = 0;
//     fork();
//     x = 1;
//     printf("%d  %d\n", x, getpid());
// //output 1 3
// //output 1 4
    
//     return 0;
// }

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main(void) {
    pid_t childpid;
    childpid = fork();
    if (childpid == -1) {
        perror("Failed to fork");
    return 1;
    }
    if (childpid == 0) /* child code */
        printf("I am child %ld\n", (long)getpid());
    else {/* parent code */
        printf("I am parent %ld\n", (long)getpid());}
    return 0;
}
