#include <stdio.h>
int main()
{
    char chr;
    printf("Enter a character: ");
    scanf("%c",&chr);
    if((chr>='A' && chr<='Z') || (chr>='a' && chr<='z'))
    {
     switch(chr)
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("%c is a VOWEL.\n",chr);
                break;
            default:
                printf("%c is a CONSONANT.\n",chr);            
        }
    }
    else
    {
        printf("%c is not an alphabet.\n",chr);
    }
 }
