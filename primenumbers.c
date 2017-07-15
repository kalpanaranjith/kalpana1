#include<stdio.h>
void main()
{
   int r1,r2,i,n,a,s;
   printf("Enter Start and End Range : ");
   scanf("%d%d",&r1,&r2);
   printf("All Prime number from %d to %d \n",r1,r2);
   for(n=r1;n<=r2;n++)
   {
a =0;
s=sqrt(n);
for(i=2;i<=s;i++)
if(n%i==0)
{
a =1;
break;
}
if(a==0)
printf("%5d",n);
   }
   getch();
}
