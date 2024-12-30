#include<fcntl.h>
#include<stdio.h>
#include<sys/stat.h>
#include<semaphore.h>
int main()
{  
  sem_t *sem;
  int val;
  char *name="/iter";

  sem=sem_open(name,O_CREAT,0662,10);

  sem_getvalue(sem,&val);
  printf("sem value=%d\n",val);  

  sem_wait(sem);
  sem_getvalue(sem,&val);
  printf("sem value=%d\n",val); 

  sem_post(sem);  
  sem_getvalue(sem,&val);
  printf("sem value=%d\n",val); 

  printf(" Iam here\n");
  
  sem_close(sem);
  sem_getvalue(sem,&val);
  printf("sem value=%d\n",val); 
  sem_unlink(name);
   return 0;
}
  
  
