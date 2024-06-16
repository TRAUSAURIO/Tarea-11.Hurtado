//Fecha:
//Autor:
//Tema: Funciones varias

#include <iostream>
using namespace std;

///Diseñe la funcion que devuelve el resultado de la serie siguiente:
/// 1 - 2 + 3 - 4 + 5 - 6 + 7.....n
///donde n es un parametro que indica el final de la serie

int SumaAlterna(int n)
{
    int resultado = 0; // Inicializa resultado a 0
    for(int k=1; k<=n; k++)
    {
        if(k % 2 == 0) { // Si k es par, restar
            resultado -= k;
        } else { // Si k es impar, sumar
            resultado += k;
        }
    }
    return resultado;
}

int main() {
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;
    int resultado = SumaAlterna(n);
    cout << "El resultado de la serie es: " << resultado << endl;
    return 0;
}

