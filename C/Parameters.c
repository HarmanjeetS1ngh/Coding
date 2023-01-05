#include <stdio.h>
void birthday(char x[], int y)
{

    printf("Happy birthday dear %s!\n", x);
    printf("You are %d years old!", y);
}
int main()
{
    char name[] = "Bro";
    int age = 19;
    birthday(name, age);
    return 0;
}