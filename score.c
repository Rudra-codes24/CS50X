#include <stdio.h>
int main(void)
{
    int scores[3];

    for (int i = 0; i < 3; i++)
    {
        printf("enter a number %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += scores[i];
    }
    printf("average: %f\n", sum / 3.0);
}