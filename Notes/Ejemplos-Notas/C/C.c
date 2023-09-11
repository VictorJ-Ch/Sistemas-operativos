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