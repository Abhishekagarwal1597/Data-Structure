#include <stdio.h>
#include <stdlib.h>
void push();
void pop();
void display();


struct stack
{
     int data;
     struct stack *next;

};
//struct stack *t,*ptr;
struct stack *top=NULL;

int main()
{ int choice;
 while(1)
{

 printf("\n<-----stack using link list---->\n");
       printf("enter 1 to insert in a linked list\n");
       printf("enter 2 to remove element in a linked list\n");
       printf("enter 3 to display in a linked list\n");
       printf("enter 4 to exit in a linked list\n");


scanf("%d",&choice);
switch(choice)
{
     case 1:push();
            break;
     case 2:pop();
            break;
      case 3:display();
             break;
      case 4: return 0;
      default:printf("invalid input");
}
}
return 0;
}

void push()
{ struct stack *t;
t=(struct stack *)malloc(sizeof(struct stack));
      printf("enter the element");
      scanf("%d",&t->data);
t->next=NULL;
if(top==NULL)
{    top=t;
}
else
{ t->next=top;
     top=t;
}
}

void pop()
{
     struct stack *t;
     if(top==NULL)
     { printf("stack is empty");
     }
     else
          t=top;
          top=top->next;
          free(t);
}
void display()
  {
       struct stack *t;
       t=top;
       while(t!=NULL)
       {
            printf("%d--> ",t->data);
            t=t->next;
       }
  }
