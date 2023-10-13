#include <stdio.h>

int main() {
    int numero, suma = 0;
    
    //mejor puse las variables completas como en ves de sum suma etc
    // Solicita un numero entero para evitar decimales etc 
    printf("Ingrese un número entero: ");
    scanf("%d", &numero);

    // esto calcula el resultado
    for (int i = 1; i <= numero; ++i) {
        suma += i;
    }


    return 0;
}


