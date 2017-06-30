#include<stdio.h>
#include<malloc.h>
struct linkedlist
{
	int data;
	struct linkedlist* next;
};
struct linkedlist* creation();
void display(struct linkedlist*);
struct linkedlist* insertion(int,int,struct linkedlist*);
struct linkedlist* insertion(int key,int value,struct linkedlist* first)
{
	int p,sz,flag;
	flag=0;
	sz=sizeof(struct linkedlist);
	struct linkedlist* back2;
	struct linkedlist* back;
	struct linkedlist* new;
	back=first;
	back2=first;
	do
	{
		if(back->data==key)
		{
			
			new=(struct linkedlist*)malloc(sz);
			new->data=value;
			if(back==first)
			{
				first=new;
				first->next=back;
				
				
			}
			else
			{
					new->next=back;
					back2->next=new;
					back=new;
				
			}
			printf("[insertion sucessfull]");
			flag=1;
			back2=back;
			back=back->next;
			break;
		}
		else
		{
			back2=back;
			back=back->next;
		}
	}while(back2->next!=NULL);
	if(flag==0)
	printf("elemet not fount ...insertion unsucessful");
	return first;
}
struct linkedlist* creation()
{
	int n,sz,i;
	struct linkedlist* back;
	struct linkedlist* first;
	struct linkedlist* new;
	printf("enter the no. of nodes to be created ");
	scanf("%d",&n);
	sz=sizeof(struct linkedlist);
	first=(struct linkedlist*)malloc(sz);
	printf("enter the elements\n");
	scanf("%d",&first->data);
	first->next=NULL;
	back=first;
	for(i=0;i<n-1;i++)
	{
		new=(struct linkedlist*)malloc(sz);
		scanf("%d",&new->data);
		new->next=NULL;
		back->next=new;
		back=new;
	}
	return first;
}
void display(struct linkedlist* first)
{
	struct linkedlist* back;
	printf("the list is: ");
	back=first;
	while(back!=NULL)
	{
		printf("%d ",back->data);
		back=back->next;
	};
}
main()
{
	struct linkedlist* first;
	first=creation();
	display(first);
	int ch,key,value;
	while(ch!=3)
	{
		printf("                   #enter 1 for insertion and 2 for display,3 for exit");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:
				printf("enter value to be inserted and the key");
				scanf("%d%d",&value,&key);
				first=insertion(key,value,first);
				break;
			case 2:
				display(first);
				break;
			case 3:
				break;
		}
	}
}
