#include <stdio.h>
int main(void)
{
    char name[5];

    printf("what is your name? ");
    fgets(name , sizeof(name), stdin);

    printf("hello %s\n", name);
    printf("this lines prints right after, no gap\n");

}