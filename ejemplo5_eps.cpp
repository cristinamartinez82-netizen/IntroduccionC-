// ejemplo5_eps.cpp
// Ejemplo 5: Entrada - Proceso - Salida (E-P-S)

#include <iostream>   // Biblioteca para entrada/salida
using namespace std;  // Usamos el espacio de nombres estandar

int main() {
    cout << "=== Ejemplo 5: Entrada - Proceso - Salida ===" << endl; // Titulo

    int cantidad;        // Variable para la cantidad (Entrada)
    double precio = 50;  // Precio unitario fijo
    double total;        // Variable para el total (Salida calculada)

    cout << "Cantidad deseada: "; // Mensaje de entrada
    cin >> cantidad;              // Leemos la cantidad (Entrada)

    total = cantidad * precio;    // Calculamos el total (Proceso)

    cout << "Total a pagar: $" << total << endl; // Mostramos el total (Salida)

    return 0; // Fin del programa
}
