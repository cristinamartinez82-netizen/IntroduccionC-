// ejemplo1_sintaxis_basica.cpp
// Ejemplo 1: Sintaxis basica de C++

#include <iostream>   // Biblioteca para entrada/salida (cout, cin)
using namespace std;  // Evita escribir std:: antes de cout o cin

// Funcion principal del programa
int main() {
    cout << "=== Ejemplo 1: Sintaxis basica ===" << endl; // Mostramos un titulo

    // Un programa siempre tiene una funcion main.
    // Aqui mostraremos una variable sencilla.

    int numero = 5;                       // Declaramos una variable entera y la inicializamos con 5
    cout << "El numero es: " << numero;   // Mostramos el valor de la variable
    cout << endl;                         // Imprimimos un salto de linea

    return 0;                             // Indicamos que el programa termino bien
}