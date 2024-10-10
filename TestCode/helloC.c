#include <stdio.h>

int main(void)
{
    printf("Hello world!\n");

    int x = 0;
    printf("write a number: ");
    scanf("%d", &x);
    printf("You entered: %d as your number.\n", x);

    return 0;
}