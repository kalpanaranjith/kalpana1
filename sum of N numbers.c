#include<stdio.h>
void main()
{
       int n,j,sum=0;
       printf("Enter the Number: ");
       scanf("%d",&n);
       for(j=1;j<=n;j++)
           {
              printf("%d ",j);
              sum=sum+j;
           }
              printf("\n Sum of  %d is : %d ",n,sum);
              getch();
}
