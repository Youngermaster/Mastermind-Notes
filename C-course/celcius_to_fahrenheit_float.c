#include <stdio.h>

#define STEPS 20
#define MAXIMUM_VALUE 300

float celcius_to_fahrenheit(float celcius);

int main(int argc, char const *argv[]) {
    printf("C°\tF°\n");
    for (float celcius = 0; celcius <= MAXIMUM_VALUE; celcius += STEPS) {
        // * The %3.0f means that we want only 3 decimals on the output
        printf("%3.3f\t%6.3f\n", celcius, celcius_to_fahrenheit(celcius));
    }

    return 0;
}

float celcius_to_fahrenheit(float celcius) {
    return (celcius * 5 / 9) + 32;
}