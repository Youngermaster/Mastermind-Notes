#include <stdio.h>

#define STEPS 20
#define MAXIMUM_VALUE 300

float fahrenheit_to_celcius(float fahrenheit);

int main(int argc, char const *argv[]) {
    printf("F°\tC°\n");
    for (float fahrenheit = 0; fahrenheit <= MAXIMUM_VALUE; fahrenheit += STEPS) {
        // * The %3.0f means that we want only 3 decimals on the output
        printf("%3.3f\t%6.3f\n", fahrenheit, fahrenheit_to_celcius(fahrenheit));
    }

    return 0;
}

float fahrenheit_to_celcius(float fahrenheit) {
    return 5 * (fahrenheit - 32) / 9;
}