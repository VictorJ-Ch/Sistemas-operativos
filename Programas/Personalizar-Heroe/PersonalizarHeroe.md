# PERSONALIZAR HEROE
## Algoritmo
1. Declara las variables (f, health; d, age && opcion; s, name)
2. Inicia un ciclo while y dentro pones.
3. Imprime "Sos un heroe de un mundo magico".
4. Imprime "Por favor ingrese la edad de su heroe: ".
5. Guarda la edad en _age_.
6. Imprime "La edad de su heroe es de: ".
7. Imprime "Por favor nombra a tu héroe: ".
8. Crea una memoria dinámica para el name en "char".
9. Crea una condicional donde indique que si el usuario no ha puesto nada que imprima "Por favor poga algo en el nombre".
10. Guarda el nombre del usuario en _name_.
11. Imprime "Tu heroe se llama: ".
12. Imprime "Elija una opción (1, 2, 3 o 4) que sera su faccion elegida: ".
13. Guarda la opción en _opcion_.
14. Si escoge 1, imprime "Has elegido la opción de lo humanos".
15. Si escoge 2, imprime "Has elegido la opción de los elfos".
16. Si escoge 3, imprime "Has elegido la opción de los demonios".
17. Si escoge 4, imprime "Has elegido la opción de los furros".
18. SI escoge otro número que no entra dentro de las opcines, imprime "Has elegido una opción inválida lastima te quedas en la faccion de los que se calleron de chiquito":
19. Libera la memoria dinámica del _name_.
20. Sal del ciclo while.
21. End.

## Diagrama de Flujo
[Personalizar Héroe](./PersonalizarHeroe-diagrama.drawio)

## Código fuente
[Ver en consola]()
```c
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
    float health;
    int age, opcion;
    char *name;
    while(1)
    {
        printf("\n Sos un heroe de un mundo magico");
        printf("\n Por favor ingrese la edad de su heroe: ");
        scanf("%d", &age);
        printf("\n La edad de su heroe es de: %d", age);
        printf("\n Por favor nombra a tu heroe: ");
        name = (char*)malloc(100); //memoria dinamica al char
        if (name == NULL)
        {
            printf("Por favor poga algo en el nombre.\n");
        }
        scanf("%s", name);
        printf("\n Tu heroe se llama: %s", name);
        printf("\n Elija una opción (1, 2, 3 o 4) que sera su faccion elegida: ");
        scanf("%d", &opcion);
        if (opcion == 1)
        {
            printf("\n Has elegido la opción de lo humanos\n");
        }
        else if (opcion == 2) 
        {
            printf("\n Has elegido la opción de los elfos\n");
        }
        else if (opcion == 3) 
        {
            printf("\n Has elegido la opción de los demonios\n");
        }
        else if (opcion == 4) 
        {
            printf("\n Has elegido la opción de los furros\n");
        }   
        else 
        {
         printf("\n Has elegido una opción inválida lastima te quedas en la faccion de los que se calleron de chiquito\n");
        }
        free(name);
    return 0;
    }
}
```