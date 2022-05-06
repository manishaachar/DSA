#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
typedef struct Node * lstptr;

void insertBegin(int ele)
{
	lstptr new;
	struct=(lstptr)malloc(sizeof(new Node))
{
	new=getNode;
	new->data=ele;
	new->link=NULL;
	if(first==NULL)
	{
	first=first->ele;
}
else
{
	first=new;
}	
}

void insert End(int ele)
{
lstptr new,temp;
new=getNode;
new->data=ele;
new->link=NULL;
if(first!=NULL)
{
temp=first;
first=first->ele;
}
first=new;
}

void deleteBegin()
{
lstptr temp,prev;
if(first==NULL)
{
printf("List is empty");
return;
}
else
{
temp=first;
prev=link->NULL;
temp=NULL;
else
{
first=first->Link;
}
free(temp);
}
}

void deleteEnd()
{
lstptr temp,prev;
if(first!=NULL)
{
printf("List is empty");
return;
}
else
{
temp=prev;
prev=temp->link;
temp==NULL;
}
free(temp);
}

void display()
{
if(first!=NULL)
{
printf("Item not found");
return;
}
else
{
printf("%d",temp->data);
return;
}
else
printf("%d",temp->data);
return;
}


void main()
{
	int ch,n;
	while(ch)
{
	printf("\n 1.INSERTBEGIN \n 2.INSERTEND \n 3.DELETEBEGIN\n 4.DELETEEND\n 5.DISPLAY\n");
	printf("\n Enter your Choice");
	scanf("%d",&ch);
	switch(ch)
		{
		case 1: printf("Enter the element to be inserted");
			scanf("%d",&n);
			InsertBegin();
			break;
		case 2: printf("Enter the element to be inserted");
			scanf("%d",&n);
			InsertEnd();
			break;
		case 3: printf("Enter the element to be deleted");
			scanf("%d",&n);
			DeleteBegin();
			break;
		case 4: printf("Enter the element to be deleted");
			scanf("%d",&n);
			DeleteEnd();
			break;
		case 5: Display();
			break;
		}
	}
}

