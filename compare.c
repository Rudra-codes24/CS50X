#include <stdio.h>
int main(void)
{
    int x, y;

    printf("enter the value of x and y: ");
    scanf("%d %d", &x, &y);

    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }


}