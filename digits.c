#include<stdio.h>
int main(){
  int n,count=0;

  printf("Enter a number: ");
  scanf("%d",&n);

  while(n){
      n=n/10;
      count++;
  }
  printf("Total digits is:  %d",count);
  return 0;
}
