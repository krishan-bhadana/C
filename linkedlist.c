#include<stdio.h>
#include<malloc.h>
struct linkedlist
{
	int data;
	struct linkedlist* next;
};
main()
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
	for(i=2;i<n+1;i++)
	{
		new=(struct linkedlist*)malloc(sz);
		scanf("%d",&new->data);
		new->next=NULL;
		back->next=new;
		back=new;
	}
	printf("the resultant list is:\n");
	back=first;
	for(i=1;i<n+1;i++)
	{
		printf("%d\n",back->data);
		back=back->next;
	}
}
