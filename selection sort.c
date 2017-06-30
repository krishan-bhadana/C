# include<stdio.h>
int main()
{
	int j,n,min,a[100],i,swap,count=0;
	printf("enter the size of list");
	scanf("%d",&n);
	printf("enter the %d elements",n);
	for(j=0;j<n;j++)
	scanf("%d",&a[j]);
	count++;
	for(j=0;j<n;j++)
	{
		min=j;
		count++;
		for(i=j+1;i<n;i++)
		{
			if(a[i]<a[min])
			min=i;
			count++;
		}
		count++;
		if(min!=j)
		{
			count=count+3;
			swap=a[min];
			a[min]=a[j];
			a[j]=swap;
		}
		count++;
	}
	printf("the sorted list is");
	for(j=0;j<n;j++)
	{
		printf("\t%d",a[j]);
	}
	printf("\ncount is %d",count);
	return 0;
}
