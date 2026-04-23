#include<stdio.h>

int main(){

    float weight, height, BMI;

    printf("Enter the Weight : ");
    scanf("%f", &weight);

    printf("Enter the height : ");
    scanf("%f", &height);

    BMI = weight/(height * height);

    printf("BMI : %.2f\n", BMI);

    return 0;
}