// Fecha: 16/06/2024
// Autor: Ronald Elian Hurtado Jama
// Tema: Ecuación Cuadrática
// Descripción: Diseñe la función que calcule el resultado de la ecuación cuadrática.
// La función retorna un string indicando el estado del cálculo y los resultados x1 y x2 como referencias.

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// Definición de la función resolverEcuacionCuadratica
// Esta función toma los coeficientes a, b y c de la ecuación cuadrática ax^2 + bx + c = 0

string resolverEcuacionCuadratica(double a, double b, double c, double& x1, double& x2) {
    // Verificar si a es cero
    if (a == 0) {
        return "Error, división por cero";
    }

    // Calcular el discriminante
    double discriminante = b * b - 4 * a * c;

    // Verificar si el discriminante es negativo
    if (discriminante < 0) {
        return "No se puede calcular la raíz cuadrada de un número negativo";
    }

    // Calcular las soluciones de la ecuación cuadrática
    x1 = (-b + sqrt(discriminante)) / (2 * a);
    x2 = (-b - sqrt(discriminante)) / (2 * a);

    return "Correcto";
}

int main() {
    double a = 1, b = -3, c = 2; // Coeficientes de la ecuación
    double x1, x2; // Variables para almacenar las soluciones

    // Llamar a la función resolverEcuacionCuadratica
    string resultado = resolverEcuacionCuadratica(a, b, c, x1, x2);

    cout << resultado << endl;
    if (resultado == "Correcto") {
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    return 0;
}
