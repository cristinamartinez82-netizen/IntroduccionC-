// ejemplo2_descomposicion.cpp
// Ejemplo 2: Gatito 1 - Descomposicion

#include <iostream>   // Biblioteca para cout y cin
#include <string>     // Biblioteca para usar string
using namespace std;  // Usamos el espacio de nombres estandar

string productoGlobal; // Variable global para simplificar el ejemplo
double precioGlobal;   // Otra variable global para el precio

// Funcion que saluda al cliente
void saludarCliente() {
    cout << "Hola, bienvenido a OfiExpress." << endl; // Mensaje de bienvenida
}

// Funcion que pide el producto
void pedirProducto() {
    cout << "¿Que producto deseas? "; // Pregunta al usuario
    cin >> productoGlobal;            // Lee el nombre del producto (una sola palabra)
}

// Funcion que muestra un precio fijo
void mostrarPrecio() {
    precioGlobal = 25.50;                             // Asignamos un precio de ejemplo
    cout << "El precio es: $" << precioGlobal << endl; // Mostramos el precio
}

// Funcion main que une las anteriores
int main() {
    cout << "=== Ejemplo 2: Descomposicion ===" << endl; // Titulo del ejemplo

    saludarCliente();   // Llamamos a la funcion que saluda
    pedirProducto();    // Llamamos a la funcion que pide producto
    mostrarPrecio();    // Llamamos a la funcion que muestra el precio

    return 0;           // Fin del programa
}