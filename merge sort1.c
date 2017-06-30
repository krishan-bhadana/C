#include<stdio.h>
#include<conio.h>
int count=0;
void merge(int [],int ,int ,int );
void mergesort(int [],int ,int );
int A[30];
int main()
{
 int i,size;
 printf("Enter total no. of elements : ");
 scanf("%d",&size);
 for(i=0; i<size; i++)
 {
   printf("Enter %d element : ",i+1);
   scanf("%d",&A[i]);
 }
 mergesort(A,0,size-1);
 printf("sorted elements:\n");
 for(i=0; i<size; i++)
 printf("%d ",A[i]);
 printf("\ncount is %d",count);
 getch();
 return 0;
}


void mergesort(int A[],int p,int q)
{
 int mid;
 if(p<q)
 {
   mid=(p+q)/2;
   mergesort(A,p,mid);
   mergesort(A,mid+1,q);
   merge(A,p,mid,q);
   count=count+4;
 }
}


void merge(int A[],int p,int mid,int q)
{
  int tmp[30];
  int i,j,k,m; 
  j=p;
  m=mid+1;
  count++;
  for(i=p; j<=mid && m<=q ; i++)
  {
     if(A[j]<=A[m])
     {
         tmp[i]=A[j];
         j++;
         count=count+2;
     }
     else
     {
         tmp[i]=A[m];
         m++;
         count=count+2;
     }
  }
  if(j>mid)
  {
  	count++;
     for(k=m; k<=q; k++)
     {
         tmp[i]=A[k];
         i++;
         count++;
     }
  }
  else
  {
  	count++;
     for(k=j; k<=mid; k++)
     {
        tmp[i]=A[k];
        i++;
        count++;
     }
  }
  count++;
  for(k=p; k<=q; k++)
     {
	 A[k]=tmp[k];
	 count++;
}
 }

