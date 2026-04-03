#include <stdio.h>

// con f2 cambio en todo el codigo el nombre de una funcion/variable/cte
void invertirEntero(int *p) {
    int temp = *p;
    int rev = 0;
    while (temp > 0) {
        rev = (rev * 10) + (temp % 10); // recordatorio el % (div) te da el resto de la division y aqui sirve para guardar el ultimo digito cuando se lo hace en 10
        temp = temp / 10;
    }
    *p = rev;
}

void divisionEnteraEn2(int *p) {
    *p = *p / 2;  // divido en 2
}

void sumarDigitos(int *p) {
    int temp = *p;
    int suma = 0;
    while (temp > 0) {
        suma = suma + (temp % 10);
        temp = temp / 10;
    }
    *p = *p + suma;
}

void procesar_enigma(int *valor_referencia) {
    invertirEntero(valor_referencia);
    divisionEnteraEn2(valor_referencia);
    sumarDigitos(valor_referencia);
}

int main() {
    int dato_secreto = 452;
    
    printf("Iniciando depuracion con el valor: %d\n", dato_secreto);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesar_enigma(&dato_secreto);
    
    printf("Resultado final del enigma: %d\n", dato_secreto);
    
    return 0;
}
