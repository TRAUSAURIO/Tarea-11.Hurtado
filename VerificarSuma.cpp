// Fecha: 16/06/2024
// Autor: Ronald Elian Hurtado Jama
// Tema: Verificar Suma
// Descripción: Una función que recibe 3 números enteros y devuelve verdadero si uno de esos números es la suma de los otros dos.

#include <iostream>

using namespace std;

// Definición de la función esSumaDeOtros
// Esta función toma tres enteros y devuelve verdadero si uno de ellos es la suma de los otros dos.
bool esSumaDeOtros(int a, int b, int c) {
    return (a == b + c) || (b == a + c) || (c == a + b);
}

int main() {
    int num1 = 3, num2 = 5, num3 = 8; // Tres números enteros

    // Llamar a la función esSumaDeOtros y almacenar el resultado
    bool resultado = esSumaDeOtros(num1, num2, num3);

    if (resultado) {
        cout << "Uno de los números es la suma de los otros dos." << endl;
    } else {
        cout << "Ninguno de los números es la suma de los otros dos." << endl;
    }

    return 0;
}
