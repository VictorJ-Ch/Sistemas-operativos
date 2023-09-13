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