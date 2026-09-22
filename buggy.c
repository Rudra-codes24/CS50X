#include <stdio.h>
#include <string.h>

int main() {
    char name[50];

    printf("What is your name? ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';  // newline hata diya

    printf("Hello %s\n", name);

    return 0;
}