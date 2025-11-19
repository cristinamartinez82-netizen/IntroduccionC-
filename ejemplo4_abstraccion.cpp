// ejemplo4_abstraccion.cpp
// Ejemplo 4: Gatito 3 - Abstraccion (datos esenciales)

#include <iostream>   // Biblioteca para cout y cin
#include <string>     // Biblioteca para usar string
using namespace std;  // Usamos el espacio de nombres estandar

int main() {
    cout << "=== Ejemplo 4: Abstraccion ===" << endl; // Titulo del ejemplo

    string producto;   // Dato esencial: nombre del producto
    int cantidad;      // Dato esencial: cantidad
    double precio;     // Dato esencial: precio unitario
    bool hayStock;     // Dato esencial: indicador de stock

    cout << "Ingresa el nombre del producto: "; // Pedimos el producto
    cin >> producto;                            // Leemos el producto

    cout << "Ingresa la cantidad que deseas: "; // Pedimos la cantidad
    cin >> cantidad;                            // Leemos la cantidad

    precio = 30.0;     // Precio fijo de ejemplo
    hayStock = true;   // Suponemos que hay stock

    if (hayStock) { // Si hay stock
        cout << "Hay stock de " << producto << "." << endl;  // Avisamos que hay stock
        cout << "Cantidad: " << cantidad << endl;            // Mostramos la cantidad
        cout << "Precio unitario: $" << precio << endl;      // Mostramos el precio unitario
    } else { // Si no hay stock
        cout << "No hay stock de " << producto << endl;      // Avisamos la falta de stock
    }

    return 0; // Fin del programa
}
