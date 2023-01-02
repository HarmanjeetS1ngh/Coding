#include <stdio.h>

int unit1;  // Input for temperature unit
int unit2;  // Input for conversion unit
float temp; // Take Temperature value as input
float A;    //
float B;
float X;
float D;
float E;
float Y;

int main()
{
    printf("Choose Temperature units You want to convert\n");
    printf("1.Celsius\n");
    printf("2.Fahrenheit\n");
    printf("3.Kelvin\n");
    scanf("%d", &unit1);

    printf("Enter the temperature: \n");
    scanf("%f", &temp);

    printf("Choose conversion\n");
    printf("1.Celsius\n");
    printf("2.Fahrenheit\n");
    printf("3.Kelvin\n");
    scanf("%d", &unit2);

    if (unit1 == 1 && unit2 == 2)
    {
        A = temp * 9 / 5 + 32;
        printf("The temperature is: %f", A);
    }
    else if (unit1 == 1 && unit2 == 3)
    {
        B = temp + 273;
        printf("The temperature is: %f", B);
    }
    else if (unit1 == 2 && unit2 == 1)
    {
        X = 32 * temp - 32 * 5 / 9;
        printf("The temperature is: %f", X);
    }
    else if (unit1 == 2 && unit2 == 3)
    {
        D = 32 * temp - 32 * 5 / 9 + 273;
        printf("The temperature is: %f", D);
    }
    else if (unit1 == 3 && unit2 == 1)
    {
        E = temp - 273;
        printf("The temperature is: %f", E);
    }
    else if (unit1 == 3 && unit2 == 2)
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
