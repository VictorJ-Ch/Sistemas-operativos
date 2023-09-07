## MAYOR Y MENOR
```c++
#include <stdio.h>
int main() {
    int n1, n2;
    printf("\n Inserte el primer número entero:");
    scanf("%d", &n1);
    printf("\n Inserte el segundo número entero:");
    scanf("%d", &n2);
    if (n1 > n2) {
        printf("\n El número mayor es: %d", n1);
    } else if (n1 < n2) {
        printf("\n El número mayor es: %d", n2);
    } else {
        printf("\n Los números son iguales.");
    }
    return 0;
}
```
## DIAGRAMA
[Mayor y menor](./Mayor-menor-diagrama.drawio)