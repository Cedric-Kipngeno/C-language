#include <stdio.h>

int main(void)
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are an adult.\n");
    }else if (age >= 13)
{
        printf("You are a tenenager.\n");
    }else
    {
        printf("You are a child.\n");
    }

    for (int i = 1; i <= 5; i++)
    {
        printf("Count: %d\n", i);
    }

    return 0;
}
