#include<stdio.h>
#define SIZE 10
int data;

int insert (int data ,int a[10],int f,int r)
{ if(r==(SIZE-1))
	 { printf("queue is full\n");
		 return 0;
	 }

  r=r+1;
  a[r]=data;

 if(f==-1)
 {    f=0;
	}
}

int del (int a[10],int f,int r)
{ if(f==-1)
	{ printf("queue is empty");
	 return 0;
	}
int temp=a[f];
a[f]=0;

if(f==r)
{ f=-1;
  r=-1;
}
else
{ f=f+1;
}
}

int display(int a[10],int f,int r)
{
printf("queue element\n");
for(int i=f;i<=r;i++)
{ printf("%d\t",a[i]);
}
printf("\n");
}


int main()
{ int arr[SIZE],choice;
	int front=-1;
	int rear=-1;

 while(1)
{
printf("1.to insert element in queue\n 2.to delete an element in queue\n 3.to dispay the queue\n 4.to quit");
scanf("\n%d",&choice);
switch (choice)
{ case 1:
	printf("enter the elemnt in queue");
       scanf("\n%d",&data);
	insert(data,arr,front,rear);
	break;
case 2:
       del(arr,front,rear);
       break;
case 3:
       display(arr,front,rear);
       break;
default:
       printf("invalid input");
       break;

case 4:
       return 0;
}
}
}
