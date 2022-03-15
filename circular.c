#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int q[MAX];
int rear=-1;
int front=-1;

void display()
{
int i;
if(front==-1)
{
printf("\n Queue is Empty!...");
exit (0);
}
if(front<=rear)
{
for(i=front;i<=rear;i++)
printf("%d\t",q[i]);
}
else
{
for(i=front;i<=MAX;i++)
printf("%d\t",q[i]);
for(i=0;i<=rear;i++)
printf("%d\t",q[i]);
}
}

void Enqueue(int ele)
{
rear=(rear+1)%MAX;
if(rear==front)
{
printf("\n Queue is Full!...");
exit(0);
}
q[rear]=ele;
if(front==-1)
front=0;
}

void dequeue()
{
int ele;
if(front==-1)
{
printf("\n Queue is Empty!...");
exit(0);
}
ele=q[front];
if(front==rear)
front=rear=-1;
else
front=(front+1)%MAX;
}


void main()
{
int ch,op=1,ele;
while(op)
{
printf("\n 1.Insert \n 2.Delete \n 3.Display \n ");
printf("\n Enter your choice...");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("\n Enter element...");
	scanf("%d",&ele);
	Enqueue(ele);
	break;
case 2: dequeue();
	break;
case 3: display();
	break;
}
printf("\n Do you want to continue (0/1)...");
scanf("%d",&op);
}
}
