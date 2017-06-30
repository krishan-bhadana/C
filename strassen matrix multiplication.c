#include<stdio.h>
void main(){
	int a[5][5],b[5][5],result[5][5],c,d,p,q,r,s,t,u,v;
	printf("enter the first 2x2 matrix row wise\n");
	for(c=0;c<=1;c++){
		for(d=0;d<2;d++){
			scanf("%d",&a[c][d]);
		}
	}
		printf("enter the second 2x2 matrix row wise\n");
	for(c=0;c<=1;c++){
		for(d=0;d<2;d++){
			scanf("%d",&b[c][d]);
		}
	}
	p=(a[0][0]+a[1][1])*(b[0][0]+b[1][1]);
	q=(a[1][0]+a[1][1])*b[0][0];
	r=a[0][0]*(b[0][1]-b[1][1]);
	s=a[1][1]*(b[1][0]-b[0][0]);
	t=(a[0][0]+a[0][1])*b[1][1];
	u=(a[1][0]-a[0][0])*(b[0][0]+b[0][1]);
	v=(a[0][1]-a[1][1])*(b[1][0]+b[1][1]);
	result[0][0]=p+s-t+v;
	result[0][1]=r+t;
	result[1][0]=q+s;
	result[1][1]=p+r-q+u;
	printf("the result is:\n");
		for(c=0;c<=1;c++){
		for(d=0;d<2;d++){
			printf(" %d",result[c][d]);
		}
		printf("\n");
	}
	
}
