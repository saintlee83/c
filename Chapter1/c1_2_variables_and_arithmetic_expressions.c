#include <stdio.h>

int fmain(void) {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}

int main()
{
    // int fahr, celsius;
    // int lower, upper, step;

    // lower = 0;
    // upper = 300;
    // step = 10;

    // fahr = lower;
    // while (fahr <= upper) {
    //     celsius = 5 * (fahr-32) / 9;
    //     printf("%d\t%d\n", fahr, celsius);
    //     fahr = fahr + step;
    // }

    fmain();

    return 0;
}

