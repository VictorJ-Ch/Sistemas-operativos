# AÑO BISIESTO
```c++
#include <stdio.h>
int main() {
    int year;
    printf("\n Ingrese un año: ");
    scanf("%d", &year);
    if(year==76){
       printf("\n Es el primer año bisiesto");
    } else if (year % 4==0) {
       printf("\n Es un año bisiesto");
    } else {
       printf("Es un año normal");
    }
    return 0;
}
```

## DIAGRAMA
[Año bisiesto](./Año-bisiesto-diagrama.drawio)