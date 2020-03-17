/*Program for implement producer consumer problem*/
#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
#include<sys/types.h>
#define SIZE 5
sem_t empty,full,mutex;
int buffer[SIZE];
int count=0;
void * producer()
{
 while(1)
 {
  sem_wait(&empty);
  sem_wait(&mutex);
  count++;
  buffer[count%5]=count;
  printf("Produced at %d\n",count%5);
  sem_post(&full);
  sem_post(&mutex);
  if(count>=5)
  {
   printf("Buffer is full\n");
   sleep(5);
  } 
  else
  {
   sleep(5);
  }
 }
}
void * consumer()
{
 while(1)
 {
  sem_wait(&full);
  sem_wait(&mutex);
  printf("Consumed from %d\n",count%5);
  count--;
  sem_post(&empty);
  sem_post(&mutex);
  if(count==0)
  {
   printf("Buffer is empty\n");
   sleep(1);
  }
  else
  {
   sleep(1);
  }
 }
}
void main()
{
  int i=0;
  sem_init(&empty,0,SIZE);
  sem_init(&full,0,0);
  sem_init(&mutex,0,1);
  pthread_t p,c;
  while(1)
  {
   pthread_create(&p,0,producer,0);
   pthread_create(&c,0,consumer,0);
  }
}
