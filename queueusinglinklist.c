#include <stdio.h>
#include <stdlib.h>
struct queue
{
     int data;
     struct queue *next;
}*rear=NULL,*frant=NULL;

void insert();
void dequeue();
void display();


int main()
{
    // int data;
     int choice;
 while(1)
 {

printf("enter 1 to insert");
printf("enter 2 to dequeue");
printf("enter 3 to display");
scanf("%d",&choice);
switch(choice){
          case 1:insert();
                 break;
          case 2: dequeue();
                 break;
          case 3:display();
                 break;
}
}
}


void insert()
{ struct queue *t;
t=(struct queue *)malloc(sizeof(struct queue));
printf("enter the element");
scanf("%d",&t->data);
//t->data=x;
t->next=NULL;
if(frant==NULL)
{
     frant=rear=t;
     //printf("no element in queue");
}
else
{
     rear->next=t;
     rear=t;
}
}
void dequeue()
{
     struct student *t;
     if(frant==NULL)
     {
          printf("queue is empty");
     }
     else
     {    t=frant;
         frant=frant->next;
         free(t);
     }
}

void display()
{
     struct queue *t;
     if(frant==NULL)
     {
          printf("queue is empty");

     }
     else
     {
          t=frant;
          while(t->next!=NULL)
          {    printf("----liked list---\n");
               printf("%d",t->data);
               t=t->next;
          }
      printf("%d \n",t->data);
     }
}



