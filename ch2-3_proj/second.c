#include<stdio.h>

int main(){

    int seconds, hour, hour_min, min, min_sec;

    printf("Enter the seconds : ");
    scanf("%d", &seconds);

    hour = seconds/(60*60);
    hour_min = seconds%(60*60);

    min = hour_min/60;
    min_sec = hour_min%60;

    printf("Hours , Minutes, Seconds : %d hours, %d minutes, %d seconds\n", hour, min, min_sec);

    return 0;
}