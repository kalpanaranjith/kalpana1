#include<stdio.h>
int main()
{
  int n, i, Sum = 0;
  
  printf("\n Please Enter any Integer Value\n");
  scanf("%d", &n);
  
  for(i = 1; i <= n; i++)
  {
     Sum = Sum + i;
  }
  
  printf("Sum of Natural Numbers = %d", Sum);
  return 0;
}
