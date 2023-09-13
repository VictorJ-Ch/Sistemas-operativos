# CONTADOR
## Algoritmo
1. Declara la variable "attack".
2. Creamos un ciclo while que se repita hasta que la condicion de adentro se cumpla.
3. Dentro del while imprimimos "Ingrese el daño de su heroe, entre valores de 1 a 3: ".
4. Guardamos el dato en la variable "attack".
5. Creamos una condicional donde diga que si el "attack" es menor a 1.0 o mayor a 3.0, entoncesa que imprima "Por favor que se encuentre entre los valores de 1-3.".
6. Creamos otra condicion que complemente a la anterior que diga if else el "attack" es mayor a 1.0 o menor a 3.0, entonces que imrpima "El daño del heroe es de: ".
7. Dentro del IfElse colocamos un break, para que el progtama se salga una vez cumplida la condicion.
8. Colocamos un return 0 al final del ciclo while, para terminar el programa.
## Diagrama de flujo
[Contador](./Contador.drawio)
## Codigo fuente
[Probar en consola](./Contador.c)
```c
#include <stdio.h>
int main()
{
    float attack;
    while(1)
    {
        printf("\n Ingrese el daño de su heroe, entre valores de 1 a 3: ");
        scanf("%f", &attack);
        if(attack<1.0 || attack>3.0)
        {
            printf("\n Por favor que se encuentre entre los valores de 1-3.");
        }
        else if(attack>1.0 || attack<3.0)
        {
            printf("\n El daño del heroe es de: %.1f", attack);
            break;
        }
    } 
    return 0;
}
```