// Fecha: 16/06/2024
// Autor: Ronald Elian Hurtado Jama
// Tema: Dibujar Figura
// Descripción: Una función que recibe un entero que indica las filas de una figura y un string que indica el relleno de la figura.

#include <iostream>
#include <string>

using namespace std;

// Definición de la función dibujarFigura
// Esta función toma un entero filas y un string relleno, y dibuja una figura.
void dibujarFigura(int filas, string relleno) {
    for (int i = 1; i <= filas; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << relleno;
        }
        cout << endl;
    }
}

int main() {
    int filas = 4; // Número de filas de la figura
    string relleno = "+"; // Relleno de la figura

    // Llamar a la función dibujarFigura
    dibujarFigura(filas, relleno);

    return 0;
}
