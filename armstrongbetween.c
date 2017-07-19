#include<stdio.h>
int main(){
    int n,r,sum,temp,min,max;
    printf("Enter the minimum range: ");
    scanf("%d",&min);
    printf("Enter the maximum range: ");
    scanf("%d",&max);
    printf("Armstrong numbers in given range are: ");
    for(n=min;n<=max;n++){
         temp=n;
         sum = 0;
         while(temp!=0){
             r=temp%10;
             temp=temp/10;
             sum=sum+(r*r*r);
         }
         if(sum==n)
             printf("%d ",n);
    }
    return 0;
}
