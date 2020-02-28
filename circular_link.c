#include <stdio.h>
#include <stdlib.h>

void insert();
void insertatlast();
void insertatbeg();
void insertatpos();
void deleteatbeg();
void deleteatlast();
void deleteatpos();
void display();
void reverse();
//void search();
void count();



struct student
{
      int a;
      //char b;
      struct student *next;
};

struct student *start=NULL;

int main()
{
         int choice;
  //   int x;
     //char y;
     while(1)
     {
          printf("\nEnter 1 to insert in empty list\n");
          printf("Enter 3 to insert at beg\n");
          printf("Enter 2 to insert at end\n");
          //printf("Enter 3 to insert at before a node");
          //printf("Enter 4 to insert at after a node");
          printf("Enter 4 to insert at postion\n");
          printf("enter 8 to display\n");
          printf("Enter 5 to delete at beg\n");
          printf("Enter 6 to delete at end\n");
          //printf("Enter 3 to delete at before a node");
          //printf("Enter 4 to delete at after a node");
          printf("Enter 7 to delete at postion\n");
  //        printf("enter 11 for searching in linked list");
          printf("enter 9 for reversing a link list\n");
         printf("enter 10 for counting\n ");
      //    printf("enter 12 for quit");
          scanf("%d",&choice);
           switch(choice)
    {
           case 1:
               insert();
               break;
            case 2:
            insertatlast();
            break;
          case 3:
          insertatbeg();
          break;
          case 4:
          insertatpos();
          break;
         case 5:
          deleteatbeg();
          break;
         case 6:
          deleteatlast();
          break;
        case 7:
          deleteatpos();
          break;
        case 8:
          display();
          break;
          case 9:
         reverse();
          break;
          case 10:
          count();
          break;
    //      case 11:
      //    search();
        //  break;
        default:
          printf("wrong choice");
          break;
         }
     }
     return 0;
}


void insert()
{
     struct student *t;
     struct student *ptr;

     t=(struct student *)malloc(sizeof(struct student));
     printf("enter the data");
     scanf("%d",&t->a);
    // t->next=NULL;

     if(start==NULL)
     {
          start=t;
          t->next=start;
     }
     else
     {
        ptr=start;
        while(ptr->next!=start)
        {
             ptr=(ptr->next);
        }
      (ptr->next)=t;
       t->next=start;

   }
}


void insertatlast()
{
      struct student *t,*p;
      t=(struct student *)malloc(sizeof(struct student));
     printf("enter the data\n");
     scanf("%d",&t->a);
     if(start==NULL)
     { start=t;
     t->next=start;
     }
     else
     { p=start;
       if(p->next!=start)
       { p=p->next;
       }
             p->next=t;
             t->next=start;
     }
}

void insertatbeg()
{ struct student *t,*ptr;
     t=(struct student*)malloc(sizeof(struct student));
     printf("enter the data to insert a node");
     scanf("%d\n",&t->a);
     //t->next=NULL;
      if(start==NULL)
      {
           start=t;
           t->next=start;
      }
       else
        { ptr=start;
           while(ptr->next!=start)
           { ptr=ptr->next;}
            t->next=start;
          start=t;
           ptr->next=start;
         }
}
/*
void insertatpos()
{
     struct student *p,*t;
     int n,i;
//struct student *start=NULL;
     t=(struct student*)malloc(sizeof(struct student));

     printf("enter the postion to insert a node\t");
     scanf("%d",&n);
     printf("enter the data to insert in a node\t");
     scanf("%d",&t->a);
     t->next=NULL;
     p=start;
     if(n==1)
     {   insertatbeg()
         // t->next=start;
         // start=t;
     }

     { for(i=1;i<(n-1);i++)
     { p=p->next;
     }
     t->next=p->next;
     p->next=t;
     }
}
*/
void deleteatbeg()
{
      struct student *p=start;
q      //p=start;
     if(p->next==start)
    {start=NULL;
free(p)
          }
           else
          {
                start=start->next;
                free(p);
           }
}
void deleteatlast()
{
     struct student *ptr=head,*t,*x;
    if(ptr->next==head)
    {start=NULL;
    free(ptr);
    }
     else
while(ptr->next!=start)
{t=ptr;
ptr=ptr->next;
}
free(ptr);
t->next=start;

}
/*
void deleteatpos()
{
     struct student *t,*p;
     int n,i;
     printf("\nenter the postion\t");
     scanf("%d",&n);

     p=start;
     if(n==1)
     {
         start=start->next;
       free(p);
     }
     else
     {
         for(i=1;i<n;i++)
        {     t=p;
           p=p->next;
         }

       t->next=p->next;
          free(p);
     }
}
*/
void display()
{ struct student *t;

     t=start;
     printf("---link list---\n");
     while(t!=start)
     {
          printf("%d--> ",t->a);
          //printf("\n");
          t=t->next;
     }
}

void reverse()
{ struct student *prev,*ptr,*x;
  ptr=start;
  prev=NULL;
  while(ptr!=NULL)
  {
  x=ptr->next;
  ptr->next=prev;
  prev=ptr;
  ptr=x;
}
start=prev;
}

void count()
{ struct student *t;
  int c=0;
t=start;
while(t!=NULL)
{ c++;
    t=t->next;
}
printf("no of node=%d",c);
}
