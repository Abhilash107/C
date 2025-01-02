#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/shm.h>
int main(){
int id;
int *rvar;
key_t key;
key=ftok("shm_recv.c", 5);
id=shmget(key, 128, 0642 | IPC_CREAT);
rvar=(int *)shmat(id, NULL, 0);
printf("shared value is:%d\n", *rvar++);
//rvar=(int *)shmat(id, NULL, 0);
printf("shared value is:%d\n", *rvar++);
shmdt(rvar);
shmctl(id, IPC_RMID, NULL);
return 0;
}

