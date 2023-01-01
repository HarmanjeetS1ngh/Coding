#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    if (age >= 18 && age <= 122)
    {
        printf("You can cast vote!\n");
    }
    else if (age > 122)
    {
        printf("You are dead to me !\n");
    }
    else if (age == 0)
    {
        printf("You cannot cast vote, you were just born!\n");
    }
    else if (age < 0)
    {
        printf("You haven't been born yet!\n");
    }
    else
    {
        printf("You cannot cast vote!\n");
    }
    return 0;
}