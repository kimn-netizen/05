#include <stdio.h>

int main(void)
{
    int answer = 59;
    int input;
    int trial = 0;

    do
    {
        printf("Guess a number: ");
        scanf("%d", &input);

        trial++;

        if (input > answer)
        {
            printf("high!\n");
        }
        else if (input < answer)
        {
            printf("low!\n");
        }
    } while (input != answer);

    printf("congratulations! Trial:%d\n", trial);

    return 0;
}
