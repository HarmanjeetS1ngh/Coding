#include <stdio.h>

char unit1;
char unit2;
float temp;
float A;
float B;
float X;
float D;
float E;
float Y;

int main()
{
    

    printf("Choose the temperature unit in which you want to enter the temperature (F)/(C)/(K):\n");
    scanf("%c", &unit1);

    printf("Enter the temperature: \n");
    scanf("%f", &temp);

    printf("Enter the unit in which you want to know the temperature(F)/(C)/(K):\n");
    scanf("%c", &unit2);

    if (unit1 == 'C' && unit2 == 'C')
    {
        printf("The temperature is: %f", temp);
    }
    else if (unit1 == 'C' && unit2 == 'F')
    {
        A = temp * 9 / 5 + 32;
        printf("The temperature is: %f", A);
    }
    else if (unit1 == 'C' && unit2 == 'K')
    {
        B = temp + 273;
        printf("The temperature is: %f", B);
    }
    else if (unit1 == 'F' && unit2 == 'C')
    {
        X = 32 * temp - 32 * 5 / 9;
        printf("The temperature is: %f", X);
    }
    else if (unit1 == 'F' && unit2 == 'F')
    {
        printf("The temperature is: %f", temp);
    }
    else if (unit1 == 'F' && unit2 == 'K')
    {
        D = 32 * temp - 32 * 5 / 9 + 273;
        printf("The temperature is: %f", D);
    }
    else if (unit1 == 'K' && unit2 == 'C')
    {
        E = temp - 273;
        printf("The temperature is: %f", E);
    }
    else if (unit1 == 'K' && unit2 == 'F')
    {
        Y = temp - 459.67;
        printf("The temperature is: %f", Y);
    }

    else
    {
        printf("the temperature is: %f", temp);
    }
    return 0;
}
