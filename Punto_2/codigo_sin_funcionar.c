// codigo_roto.c
#include <stdio.h>
#include <stdlib.h>


void duplicar_numero(int *pNumero) {
    *pNumero = *pNumero * 2;
}

int main() {
    int valor1 =0;
    int valor2 =0; 

    printf("hola");
    printf("Ingrese el primer valor: ");
    scanf("%d", &valor1);

    printf("Ingrese el segundo valor: ");
    scanf("%d", &valor2);

    int suma = valor1 + valor2;
    printf("La suma es: %d\n", suma);

    duplicar_numero(&valor1);
    printf("El primer valor duplicado es: %d\n", valor1);

    return 0;
}