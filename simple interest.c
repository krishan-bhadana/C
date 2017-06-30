#include<stdio.h>
void main(){
	int p;
	float r,t,x;
	printf("Enter the principle");
	scanf("%d",&p);
	printf("Enter the time");
	scanf("%f",&t);
	printf("Enter the interest rate");
	scanf("%f",&r);
	x=(p*r*t)/100;
	printf("SI is %f",x);
	getch();
}
