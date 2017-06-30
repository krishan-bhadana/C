#include<stdio.h>
void main(){
	printf("\t\t\tGUESS THE WORD");
	int i=0;
	char a;
	char password[100];
	while(i>=0){
		a=getch();
		password[i]=a;
		i++;
		printf("*");
	}
}
