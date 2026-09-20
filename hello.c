#include <stdio.h>

int main(void)
{
    char answer[50];

    printf("what is your name? ");
    scanf("%s", answer);

    printf("hello, %s\n", answer);
}