# C

- Códigos pequeños.
- Facilidades para acceso a bajo nivel.
- Utiliza bibliotecas externas.
- Puedo crear mi propia libreria (solo en C).

```c
#include <studio.h>
int main()
{
    printf("Introducción al lenguaje C");
}
```

> En los videojuegos se tiende a usar el redondeo (método) de Newthon Raphson.

## GLOSARIO
- **Algoritmo**: Serie de pasos a un fin común.
- **Diagrama de flujo**: Representación gráfica de un proceso de trabajo.
- **Código fuente**: Es el código en sí.

## ESTRUCTURA IF / ELSE

En los diagramas de flujo el "True" va a la derecha y el "False a la izquierda".

[Ver diagrama de ejemplo](./Ejemplos-Notas/C/C_IfElse.drawio)

[Probar en consola](./Ejemplos-Notas/C/C.c)
``` c
#include <stdio.h>
int main()
{
    int c;
    printf("Menu: \n");
    printf("A = Añadir a la lista \n");
    printf("B = Borrar de la lista \n");
    printf("O = Ordenar la lista \n");
    printf("I = Imprimir la lista \n");
    printf("Escriba su selección y luego <enter> \n");
    if((c = getchar())!=' ')
    {
        if(c =='A')
        {
            printf("Haz selccionado añadir \n");
        }
        else if(c =='B')
        {
            printf("Haz selccionado borrar \n");
        }
            else if(c =='O')
        {
            printf("Haz selccionado ordenar \n");
        }
            else if(c =='I')
        {
            printf("Haz selccionado imprimir \n");
        }
    }
    else
    {
        printf("No has seleccionado una opción valida");
    }
    return 0;
}
```