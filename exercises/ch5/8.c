#include <stdio.h>

void Temperatures (double i);

int main (void)
{
    double i;
    
    while (scanf ("%lf", &i))
    {
        Temperatures (i);
    }
    printf ("Bye!\n");
    return 0;
}

void Temperatures (double Fabrenheit)
{
    double Celsius, Kelvin;
    Celsius = 1.8 * Fabrenheit + 32.0;
    Kelvin = Celsius + 273.16;
    printf ("Fabrenheit: %.2f Celsius: %.2f Kelvin: %.2f\n", 
            Fabrenheit, Celsius, Kelvin);
}
