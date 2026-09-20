#include <stdio.h>
int main()
{
    int num;

    printf("enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("entered number is negative ");
    }
    else if(num > 0)
    {
        printf("entered number is positive ");
    }
    else
    {
        printf("number you entered is zero ");
    }
    return 0;
}