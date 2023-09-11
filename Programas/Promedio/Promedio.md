# PROMEDIO

## Algoritmo
1. Declaramos las variables.
2. "Ingresamos la primera calificación".
3. Guardamos el valor en la variable correspondiente.
4. "Ingresamos la segunda calificación".
5. Guardamos el valor en la variable correspondiente.
6. "Ingresamos la tercera calificación".
7. Guardamos el valor en la variable correspondiente.
8. Sumamos las variables y la sumatoria la dividimoms entre la cantidad de variables.
9. Imprimimos el resultado.
## Diagrama de flujo
[Promedio](./Promedio-diagrama.drawio)

## Código fuente
[Checado en terminal](./Promedio.c)
``` c
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
```



