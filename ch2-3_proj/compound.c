#include<stdio.h>
#include<math.h>

int main(){

    float principal, rate, SI, CI;
    int time,n;

    printf("Enter the principal amount : ");
    scanf("%f", &principal);

    printf("Enter the interest rate : ");
    scanf("%f", &rate);

    printf("Enter the time : ");
    scanf("%d", &time);

    printf("Enter the frequency : ");
    scanf("%d", &n);

    SI = (principal * rate * time)/100;

    printf("Simple Interest : %.2f\n", SI);

    CI = principal*pow((1 + rate/100), n);

    printf("Compund Interest : %.2f\n", CI);

    return 0;
}