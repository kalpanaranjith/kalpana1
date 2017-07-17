#include <stdio.h>
int main()
{
    int n, rno = 0, rem;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while(n != 0)
    {
        rem = n%10;
        rno = rnor*10 + rem;
        n /= 10;
    }
    printf("Reversed Number = %d", rno);
    return 0;
}
