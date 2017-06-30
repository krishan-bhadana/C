#include<stdio.h>
int main()
{
	int data[100],n,temp,i,j,count=0;
	printf("Enter number of terms: ");
	scanf("%d",&n);
	printf("Enter elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&data[i]);
	}
	count++;
	for(i=1;i<n;i++)
	{
		temp = data[i];
		j=i-1;
		count++;
		while(temp<data[j] && j>=0)
/*To sort elements in descending order, change temp<data[j] to temp>data[j] in above line.*/
		{
			data[j+1] = data[j];
			--j;
			count++;
		}
		data[j+1]=temp;
		count++;
	}
	printf("In ascending order: ");
	for(i=0; i<n; i++)
		printf("%d\t",data[i]);
		printf("\ncount is %d",count);
    return 0;
}
