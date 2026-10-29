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




#include<stdio.h>
int main()
{
        float basic,hra, da, ta, gross;
    printf("Enter Basic Salary:");
    scanf("%f", &basic);

    hra = basic * 20/100;
    da = basic * 10/100;
    ta = basic * 5/100;
    gross = basic + hra + da + ta;

    printf("\nbasic salary=%.2f",basic);
    printf("\nHRA =%.2f", hra);
    printf("\nDA =%.2F", da);
    printf("\nTA = %2.f", ta);
    printf("\nGROSS salary =%.2f", gross);

    
}