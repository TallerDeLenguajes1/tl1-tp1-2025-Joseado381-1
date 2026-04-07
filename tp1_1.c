#include <stdio.h>

int main()
{
    int entero;
    int *pEntero;

    printf("Hola Mundo\n");

    printf("Ingrese un numero entero:\n\t");
    scanf("%d",&entero);

    pEntero = &entero;

    printf("\tEl continido del puntero es: %d\n",*pEntero);
    printf("\tLa direccion de memoria almacenada por el puntero: %p\n",pEntero);
    printf("\tLa direccion de memoria de la vareable: %p\n", &entero);
    printf("\tLa direccion de memoria del puntero: %p\n", &pEntero);
    printf("\tTamanio de memoria de la variable: %d \n", sizeof(entero));

    return 0;
}