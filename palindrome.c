#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a,r,s=0;
    printf("\n  Enter The Number:");
    scanf("%d",&n);
    a=n;
     while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
     
    if(a==s)
    {
        printf("\n  %d is a Palindrome Number",a);
    }
    else
    {
        printf("\n  %d is not a Palindrome Number",a);
    }
   }
