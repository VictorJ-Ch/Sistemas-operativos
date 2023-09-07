# OPERACIONES BASICAS
``` c++
#include <conio.h>
#include <stdio.h>
int main()
{
   int n1, n2, suma, resta, multiplicacion, division;
   printf("\n Inserte el primer númer (entero)");
   scanf("%d", &n1); //Guarda el primer número
   printf("\n Inserte el segundo número (entero)");
   scanf("%d", &n2);
   suma = n1 + n2;
   printf("\n El resultado es: %d", suma);
   resta = n1-n2;
   printf("\n La diferencia es: %d", resta);
   multiplicacion = n1*n2;
   printf("\n El producto es: %d", multiplicacion);
   if(n1 == 0){
        division = n1/n2;
        printf("\n El cociente es: %d", division);
   } else if (n2 == 0) {
       printf("\n El cociente es: Syntax error");
   }
   getch(); //Pausa
   return 0;
}
```

## DIAGRAMA
[Operaciones basicas](./Operaciones-basicas-diagrama.drawio)