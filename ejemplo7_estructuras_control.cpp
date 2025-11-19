// ejemplo7_estructuras_control.cpp
// Ejemplo 7: Estructuras de control (if y while)

#include <iostream>   // Biblioteca para cout y cin
#include <string>     // Biblioteca para usar string
using namespace std;  // Usamos el espacio de nombres estandar

int main() {
    cout << "=== Ejemplo 7: Estructuras de control ===" << endl; // Titulo

    int stock = 10;     // Stock fijo
    int cantidad;       // Cantidad a pedir

    cout << "Ingresa cantidad a pedir: "; // Pedimos la cantidad
    cin >> cantidad;                     // Leemos la cantidad

    // Estructura selectiva: if - else
    if (cantidad <= stock) {                        // Si la cantidad es menor o igual al stock
        cout << "Pedido confirmado." << endl;       // Confirmamos el pedido
    } else {                                        // En caso contrario
        cout << "No hay suficiente stock." << endl; // Avisamos que no alcanza
    }

    string continuar = "si"; // Variable para controlar el ciclo while

    // Estructura repetitiva: while
    while (continuar == "si") {                             // Mientras el usuario diga "si"
        cout << "¿Quieres seguir viendo el mensaje? (si/no): "; // Preguntamos si quiere continuar
        cin >> continuar;                                    // Leemos la respuesta
    }

    cout << "Fin del ejemplo de estructuras." << endl; // Mensaje final

    return 0; // Fin del programa
}
