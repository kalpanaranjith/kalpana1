#include<stdio.h>
int main(){
  int pow,n,i=1;
  long int sum=1;
  printf("\nEnter a number: ");
  scanf("%d",&n);
  printf("\nEnter power: ");
  scanf("%d",&pow);
  while(i<=pow){
            sum=sum*n;
            i++;
  }
  printf("\n%d to the power %d is: %ld",n,pow,sum);
  return 0;
}
