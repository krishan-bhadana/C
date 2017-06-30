#include<stdio.h>
int main(){
int num;
scanf("%d",&num);
if(num%15 == 0){
	printf("FizzBuzz");
}
else if(num%5 == 0)
	{
		printf("buzz");
	}
	else if(num%3 == 0){
		printf("fizz");
	}
	return 0;
}
