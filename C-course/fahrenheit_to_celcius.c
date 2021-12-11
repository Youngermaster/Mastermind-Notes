#include <stdio.h>

#define STEPS 20
#define MAXIMUM_VALUE 300

int fahrenheit_to_celcius(int fahrenheit);

int main(int argc, char const *argv[]) {
    printf("F°\tC°\n");
    for (int fahrenheit = 0; fahrenheit <= MAXIMUM_VALUE; fahrenheit += STEPS) {
        // * The %3d means that we want to organize the output for 3 characters
        printf("%3d\t%3d\n", fahrenheit, fahrenheit_to_celcius(fahrenheit));
    }

    return 0;
}

int fahrenheit_to_celcius(int fahrenheit) {
    return (5 * (fahrenheit - 32)) / 9;
}