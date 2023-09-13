#include <stdio.h>
int main()
{
    float prom, cal1, cal2, cal3;
    printf("\n Ingrese la primera calificación: ");
    scanf("%f", &cal1);
    printf("\n Ingrese la segunda calificaión: ");
    scanf("%f", &cal2);
    printf("\n Ingrese la tercera calificaión: ");
    scanf("%f", &cal3);
    prom = (cal1 + cal2 + cal3) / 3;
    printf("\n Promedio: %.4f", prom);
    return 0;
}