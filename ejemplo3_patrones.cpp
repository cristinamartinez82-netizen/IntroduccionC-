// ejemplo3_patrones.cpp
// Ejemplo 3: Gatito 2 - Patrones (ciclo while)

#include <iostream>   // Biblioteca de entrada/salida
#include <string>     // Biblioteca para usar string
using namespace std;  // Usamos el espacio de nombres estandar

string productoGlobal; // Variable global para el nombre del producto
double precioGlobal;   // Variable global para el precio

// Reutilizamos la idea de pedirProducto
void pedirProducto() {
    cout << "¿Que producto deseas? "; // Pregunta al usuario
    cin >> productoGlobal;            // Lee el nombre del producto
}

// Reutilizamos la idea de mostrarPrecio
void mostrarPrecio() {
    precioGlobal = 25.50;                             // Precio fijo de ejemplo
    cout << "El precio es: $" << precioGlobal << endl; // Mostramos el precio
}

// Funcion principal
int main() {
    cout << "=== Ejemplo 3: Patrones (while) ===" << endl; // Titulo del ejemplo

    string continuar = "si"; // Variable para controlar el ciclo

    // Mientras el usuario escriba "si", repetimos el proceso
    while (continuar == "si") {
        pedirProducto();                                     // Pedimos el producto
        mostrarPrecio();                                     // Mostramos el precio
        cout << "¿Deseas realizar otro pedido? (si/no): ";   // Preguntamos si quiere otro pedido
        cin >> continuar;                                    // Leemos la respuesta
    }

    cout << "Fin de la atencion de pedidos." << endl; // Mensaje de cierre

    return 0; // Fin del programa
}
