// AR_180Triangulos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

void casoDePrueba()
{
    // a^2 = b^2 + c^2  Rectángulo
    // a^2 > b^2 + c^2  Obtusángulo
    // a^2 < b^2 + c^2 Acutángulo

    int a, b, c, aux;
    cin >> a >> b >> c;
    //Es triangulo, si cualquiera de los lados es mayor que la diferencia entre los otros dos
    //a > b - c equivale a b < a + c para no sacar valores absolutos
    if ((a < b + c) && (b < c + a) && (c < a + b)) { //condición de triangulo
        //vamos a guardar en a el lado mayor
        if (a < b) {
            aux = b;
            b = a;
            a = aux;
        }
        if (a < c) {
            aux = c;
            c = a;
            a = aux;
        }
        //Comprobamos la condición sobre el lado mayor
        int hip_cuad = a * a;
        int suma_catetos_cuad = b * b + c * c;
        if (hip_cuad == suma_catetos_cuad) {
            cout << "RECTANGULO" << endl;
        }
        else if (hip_cuad < suma_catetos_cuad) {
            cout << "ACUTANGULO" << endl;
        }
        else
            cout << "OBTUSANGULO" << endl;       
    }
    else {
        cout << "IMPOSIBLE" << endl;
    }

}
int main()
{
    unsigned int numCasos, i;
    cin >> numCasos;
    for (int i = 0; i < numCasos; i++) {
        casoDePrueba();
    }
    return 0;    
}

