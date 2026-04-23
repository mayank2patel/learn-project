#include<stdio.h>

int main(){

    int num, meter, miles, feet;

    printf("Enter the Value : ");
    scanf("%d", &num);

    miles = 1.609 * num;
    meter = 1000 * num;
    feet = 3281 * num;

    printf("Value : %d Miles\n\t%d Meters\n\t%d feet\n",miles, meter, feet);

    return 0;

}