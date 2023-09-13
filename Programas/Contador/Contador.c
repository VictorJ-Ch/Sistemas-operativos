#include <stdio.h>
int main()
{
    float damage;
    int attack;
    while(1)
    {
        printf("\n Ingrese el daño de su heroe, entre valores de 1 a 3: ");
        scanf("%f", &damage);
        if(damage<1.0 || damage>3.0)
        {
            printf("\n Por favor que se encuentre entre los valores de 1-3.");
        }
        else if(damage>1.0 || damage<3.0)
        {
            printf("\n El daño del heroe es de: %.1f", damage);
            break;
        }
    } 
    return 0;
}
    