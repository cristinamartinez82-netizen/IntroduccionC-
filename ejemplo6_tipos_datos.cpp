// ejemplo6_tipos_datos.cpp
// Ejemplo 6: Tipos de datos en C++

#include <iostream>   // Biblioteca para cout y cin
#include <string>     // Biblioteca para usar string
using namespace std;  // Usamos el espacio de nombres estandar

int main() {
    cout << "=== Ejemplo 6: Tipos de datos ===" << endl; // Titulo

    int stock = 25;              // Entero: stock disponible
    double precio = 59.90;       // Real: precio con decimales
    char categoria = 'A';        // Caracter: categoria
    string producto = "Lapiz";   // Cadena: nombre del producto
    bool disponible = true;      // Booleano: indica si esta disponible

    cout << "Producto: " << producto << endl;         // Mostramos el producto
    cout << "Stock: " << stock << endl;               // Mostramos el stock
    cout << "Precio: $" << precio << endl;            // Mostramos el precio
    cout << "Categoria: " << categoria << endl;       // Mostramos la categoria
    cout << "Disponible: " << disponible << endl;     // Mostramos disponibilidad (1 = true, 0 = false)

    return 0; // Fin del programa
}
