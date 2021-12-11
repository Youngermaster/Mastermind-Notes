#include <stdio.h>

#define STEPS 20
#define MAXIMUM_VALUE 300

int celcius_to_fahrenheit(int celcius);

int main(int argc, char const *argv[]) {
    printf("C°\tF°\n");
    for (int celcius = 0; celcius <= MAXIMUM_VALUE; celcius += STEPS) {
        // * The %3.0f means that we want only 3 decimals on the output
        printf("%3d\t%3d\n", celcius, celcius_to_fahrenheit(celcius));
    }

    return 0;
}

int celcius_to_fahrenheit(int celcius) {
    return (celcius * 5 / 9) + 32;
}