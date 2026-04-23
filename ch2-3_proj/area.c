#include<stdio.h>
#include<math.h>

int main(){

    int breadth, length, area_rec, perimeter_rec;
    float dia_rec;

    printf("Enter the breadth & length of rectangle : ");
    scanf("%d %d", &breadth, &length);

    area_rec = breadth * length;
    perimeter_rec = 2 * (length + breadth);
    dia_rec = sqrt(breadth * breadth + length * length);

    printf("Area : %d\nPerimeter : %d\nDiagonal : %.2f\n", area_rec, perimeter_rec, dia_rec);

    int radius,cir_cir, area_cir, dia;
    printf("Enter the radius : ");
    scanf("%d", &radius);

    area_cir = M_PI * radius * radius;
    cir_cir = 2 * M_PI * radius;
    dia = 2 * radius;

    printf("Area : %d\nPerimeter : %d\nDiagonal : %.d\n", area_cir, cir_cir, dia);

    return 0;
}