#include<stdio.h>
int cir_queue[100];
int size,rear=0,front=0;
void add();
void delete();
void display();
main()
{	int ch;
	printf("Enter the size of circular queue");
	scanf("%d",&size);
	while(ch!=4)
	{
		printf("Enter 1 for add, 2-delete, 3-display, 4-exit   ");
		scanf("%d",&ch);
		if(ch==1)
		add();
		else
		{
		if(ch==2)
		delete();
		else {
		if(ch==3)
		display();
		else {
		if(ch==4)
		break;}
		}
		}
	};
	return 0;
}
void add()
{
	int element;
	if((rear+1)%size==front)
	printf("[the circular Queue is overflow]");
	else
	{
		printf("Enter element");
		scanf("%d",&element);
		rear=(rear+1)%size;
		cir_queue[rear]=element;
	}
}
void delete()
{
	if(rear==front)
	printf("cir_quque is underflow");
	else
	{
		front=(front+1)%size;
	}
}
void display()
{
	while(rear!=front)
	{
		front=(front+1)%size;
		printf("%d\n",cir_queue[front]);
	}
}
