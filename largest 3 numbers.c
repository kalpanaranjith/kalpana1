#include <stdio.h>
 
int main()
{ 
    int a,b,c;
    int large;
 
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
 
    if(a>b && a>c)        
        large=a;
    else if(b>a && b>c)       
        large=b;
    else
        large=c;
 
    printf("Largest number is = %d",large);
 
    return 0;
}
