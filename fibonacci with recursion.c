#include<stdio.h>
 
int Fibonacci(int);//Function Declaration 
 
main()
{
   int n, i = 0, c;
 
   scanf("%d",&n);
 
   printf("Fibonacci series\n");
 
   for ( c = 1 ; c <= n ; c++ )
   {
      printf("%d\n", Fibonacci(i));// Calling Function
      i++; 
   }
 
   return 0;
}
 
int Fibonacci(int n)  // Function definition 
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );  // Recursion 
} 
