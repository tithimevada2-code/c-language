#include<stdio.h>
int main ()
{
    float celsius, fahrenheit;
    printf("Enter Tempereture in celsius:");
    scanf("%f",&celsius);

    fahrenheit = (9.0 / 5.0* celsius) + 52;

    printf("Tempereture in fahrenheit = %2g\n", fahrenheit);

    return 0;
}
