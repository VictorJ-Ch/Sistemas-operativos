#include <stdio.h>
/*
int main()
{
   int gatos, ingresosTotales, ingresosActuales; 
}
*/
 
int main(){
 int contadorGatos = 0;
    int numeroIngresos;
    int ingresoActual = 0;

    printf("Ingrese el número de ingresos de gatos en el día: ");
    scanf("%d", &numeroIngresos);

    if (numeroIngresos < 0) {
        printf("El número de ingresos no puede ser negativo.\n");
        return 1; // Salir del programa con un código de error
    }

    while (ingresoActual < numeroIngresos) {
        printf("Ingrese el número de gatos en el ingreso %d: ", ingresoActual + 1);
        int gatosIngreso;
        scanf("%d", &gatosIngreso);
        
        if (gatosIngreso < 0) {
            printf("El número de gatos en un ingreso no puede ser negativo.\n");
            return 1; // Salir del programa con un código de error
        }

        contadorGatos += gatosIngreso;
        ingresoActual++;
    }

    printf("El total de gatos ingresados en el día es: %d\n", contadorGatos);

    return 0; // Terminar el programa con éxito
}
    