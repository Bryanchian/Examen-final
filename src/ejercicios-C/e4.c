#include <stdio.h>

/* print Celsius-Fahrenheit table
   for c = 0, 10, ..., 100 */

int main(void)
{
    int lower, upper, step;
    float celsius, fahr;
    lower = 0;
    upper = 100;
    step = 10;
    celsius = lower;

    printf("Tabla de conversion Celsius -> Fahrenheit\n");
    printf("------------------------------------------\n");
    printf(" Celsius   Fahren.\n");

    while (celsius <= upper) {
        fahr = (celsius * 9.0 / 5.0) + 32.0;
        printf("%7.0f %10.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}


    return 0;
}
