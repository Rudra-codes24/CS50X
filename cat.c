#include <stdio.h>
void print_meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}

int main(void)
{
    int n;
    printf("how many times do you want to print meow?\n");
   

    if (scanf("%d", &n) != 1 )
    {
        printf("please enter a whole number\n");
        return 1;
    }
    
    if (n < 0)
    {
        printf("please enter a positive number");
        return 1;
    }
    print_meow(n);

    
}
