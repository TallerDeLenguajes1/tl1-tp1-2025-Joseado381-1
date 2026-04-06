#include <stdio.h>

// con f2 cambio en todo el codigo el nombre de una funcion/variable/cte
void invertirEntero(int *pNumero) {
    int valorInicial = *pNumero;
    int numeroInvertido = 0;
    while (valorInicial > 0) {
        numeroInvertido = (numeroInvertido * 10) + (valorInicial % 10); // recordatorio el % (div) te da el resto de la division y aqui sirve para guardar el ultimo digito cuando se lo hace en 10
        valorInicial = valorInicial / 10;
    }
    *pNumero = numeroInvertido;
}

void divisionEnteraEn2(int *pNumero) {
    *pNumero = *pNumero / 2;  // divido en 2
}

void sumarDigitos(int *pNumero) {
    int valorInicial = *pNumero;
    int suma = 0;
    while (valorInicial > 0) {
        suma = suma + (valorInicial % 10);
        valorInicial = valorInicial / 10;
    }
    *pNumero = *pNumero + suma;
}

void procesar_enigma(int *valor_referencia) {
    invertirEntero(valor_referencia);
    divisionEnteraEn2(valor_referencia);
    sumarDigitos(valor_referencia);
}

int main() {
    int transformar = 452;
    
    printf("Iniciando depuracion con el valor: %d\n", transformar);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesar_enigma(&transformar);
    
    printf("Resultado final del enigma: %d\n", transformar);
    
    return 0;
}
