#include <stdio.h>
 
int main()
{
  int array[100], n, c, d, swap, count=0, flag=-1;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
    count++;
 
  for (c = 0 ; c < n; c++)
  {
  	count++;
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
      	count=count+3;
        swap       = array[d+1];
        array[d+1]   = array[d];
        array[d] = swap;
        flag = 0;
      }
      count++;
    }
    if(flag==-1)
    break;
    count++;
  }
 
  printf("Sorted list in ascending order:\n");
 
  for ( c = 0 ; c < n ; c++ )
     printf("%d\n", array[c]);
     printf("\nNo of loop iterations = %d",count);
 
  return 0;
}
