#include<stdio.h>
int a[10],min=100,max=0;
void minmax(int,int,int,int);
void main(){
	int n,c;
	printf("Enter number of elements\n");
   scanf("%d",&n);
 	printf("Enter %d integers\n", n);
  for (c = 0; c < n; c++)
      scanf("%d",&a[c]);
      minmax(0,n-1,max,min);
      printf("min is %d and max is %d",min,max);
 
}
void minmax(int i,int j,int f,int b){
	if(max<f){
		max=f;
	}
	if(min>b){
		min=b;
	}
	if(i==j){
		if(max<a[i]){
		max=a[i];
		}
		if(min>a[i]){
		min=a[i];
		}
	}
	else if(i==j-1){
		if(a[i]>a[j]){
			if(max<a[i]){
		max=a[i];
		}
		if(min>a[j]){
		min=a[j];
		}
		}
		else{
		 	if(max<a[j]){
		max=a[j];
		}
		if(min>a[i]){
		min=a[i];
		}
		}
	}
	else{
		int mid=(i+j)/2;
		minmax(i,mid,max,min);
		minmax(mid+1,j,max,min);
	}
}
