#include <stdio.h>

int main(void)
{
    int count=0;
    char c;

    printf("Input a string: ");
    while ((c = getchar()) != '\n')
    {
        if (c >= '0' && c <= '9')
            count++;
    }
    printf("The number of digits is: %d\n", count);

    return 0;
}
