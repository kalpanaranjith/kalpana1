#include <stdio.h>
int main()
{
    int n;

    printf("Enter a num: ");
    scanf("%lf", &n);

    if (n <= 0)
    {
        if (n == 0)
            printf("You entered 0.");
        else
            printf("You entered a negative number.");
    }
    else
        printf("You entered a positive number.");
    return 0;
}
