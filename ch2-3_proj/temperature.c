#include<stdio.h>

#define FACTOR (9.0f/5.0f)
#define CONSTANT 32.0f
#define KCONSTANT 273.15f

int main (){

    float celcius, far, kel;

    printf("Enter the celcius value : ");
    scanf("%f", &celcius);

    far = (celcius * FACTOR) + CONSTANT;
    kel = celcius + KCONSTANT;

    printf("Celcius to Farenheit : %.1f\nCelcius to Kelvin : %.1f\n", far, kel);

    return 0;
}