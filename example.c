#include <stdio.h>

int main(void)
{
    int num;
    int sum = 0;
    int i;

    printf("Input an integer: ");
    scanf("%d", &num);

    for (i=0; i<num; i++)
    {
        sum = sum + i+1;
    }

    printf("Sum result is: %d\n", sum);

    return 0;
}
