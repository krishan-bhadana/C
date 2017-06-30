#include<stdio.h>
#include<malloc.h>
#include<conio.h>
struct bst
{
	int val;
	struct bst* leftc;
	struct bst* rightc;
};
struct bst* create();
struct bst* attach(struct bst*,struct bst*);
void traversal(struct bst*);
struct bst* create()
{
	int val,size;
	struct bst *treeptr,*newnode;
	treeptr=NULL;
	printf("\nEnter the values of the nodes terminatd by a negative values")
	val=0;
	size=sizeof(struct bst);
	while(val>=0)
	{
		printf("\n enter val");
		scanf("%d",&val);
		if(val>=0)
		{
			
		}
	}
	return root;
}
struct bst* attach(struct bst* root,int key)
{
	struct bst* new;
	int sz;
	sz=sizeof(struct bst);
	if(root==NULL)
	{
		new=(struct bst*)malloc(sz);
		new->data=key;
	}
	else
	{
		if(root->data<key)
		{
			attach(root->rightc,key);
		}
		else
		attach(root->leftc,key);
	}
	return root;
}
void traversal(struct bst* root,int ch)
{
	switch(ch)
	{
		case 1:
			if(root->leftc==NULL)
			{
			printf("%d",root->data);
			traversal(root->rightc,ch);
			else
			{
				traversal(root->leftc,ch);
				printf("%d",root->data);
				traversal(root->rightc,ch);
				
			}
		case 2:
			if(root->leftc==NULL)
			{
			printf("%d",root->data);
			else
			{
				traversal(root->leftc,ch);
				printf("%d",root->data);
				traversal(root->rightc,ch);
				
			}	
			
	}
}
main()
{
	struct bst* bintree;
	bintree=create();
	printf("\n The tree is...");
	inorder(bintree);
}
