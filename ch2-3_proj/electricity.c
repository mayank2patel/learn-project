#include<stdio.h>

int main(){

    float units, cost1, cost2;

    printf("Enter the amount of units consumed : ");
    scanf("%f", &units);

    cost1 = units * 3;
    cost2 = units * 5;

    printf("Cost for 0 - 100 units : %.2f\n", cost1);
    printf("Cost for 100 - 300 units : %.2f\n", cost2);


    return 0;
}