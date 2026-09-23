#include <iostream>
#include <string>
#include "utilerias.h"

// Usa la función leerEntero que ya está en utilerias.h
int main() {
    const int CANTIDAD = 5;
    int contador = 0;
    int numero = 0;
    int pares[CANTIDAD];
    int totalPares = 0;

    std::cout << "Guardar los numeros pares de " << CANTIDAD << " numeros\n";

    // 3. Ciclo: leer CANTIDAD números
    while (contador < CANTIDAD) {
        numero = leerEntero("Escribe un numero: ");
        if (numero % 2 == 0) {
            pares[totalPares] = numero;  // guarda el número par
            totalPares++;
        } else {
            std::cout << "Numero invalido\n";
        }
        contador++;
    }

    // 4. Salida
    std::cout << "\nSe guardaron " << totalPares << " numeros pares:\n";
    for (int i = 0; i < totalPares; i++) {
        std::cout << pares[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
    // 3. Ciclo: leer CANTIDAD números
    // TODO: lee cada número con leerEntero("Escribe un numero: ")
    // TODO: si el número es par, guárdalo en la siguiente posición libre

    // 4. Salida
    // TODO: muestra cuántos pares se guardaron
    // TODO: recorre el arreglo e imprime cada par

    // ¿Qué significa return 0;?
    
