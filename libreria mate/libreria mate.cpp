

#include <iostream>
#include "tareamath.h"
using namespace std;





int main()
{
    int filas, columnas;
    double radian = 0.5;
    char input = 'y';

    cout << "Seno: " << seno(radian) << endl;
    cout << "Coseno: " << coseno(radian) << endl;
    cout << "Tangente: " << tangente(radian) << endl;




    while (input == 'Y' || input == 'y') {
        cout << "Ingresa las filas de la primera matriz: " << endl;
        cin >> filas;
        cout << "Ingresa las columnas de la primera matriz: " << endl;
        cin >> columnas;
        matrix m1 = matrix(filas, columnas);
        m1.ingresarMatriz();
        cout << "Ingresa las filas de la segunda matriz: " << endl;
        cin >> filas;
        cout << "Ingresa las columnas de la segunda matriz: " << endl;
        cin >> columnas;
        matrix m2 = matrix(filas, columnas);
        m2.ingresarMatriz();
        if (m1.getRow() == m2.getColumn()) {
            matrix m3 = matrix(m1.getRow(), m2.getColumn());
            m3.productomatriz(m1, m2);
            m3.imprimirmatriz();
            
        }
        else {
            cout << "Dimensiones incompatibles" << endl;
        }
        cout << "Desea ingresar otra matriz? ( Y / N)" << endl;
        cin >> input;
        
    }
        

    




   /* double numero = 0.5;
    cout << numero;
    cout << "Tangente math.h = " << tan(numero) << endl;
    cout << "tangente mia = " << tangente(numero) << endl;
    cout << "seno math.h = " << sin(numero) << endl;
    cout << "seno mia = " << seno(numero) << endl;
    cout << "coseno math.h = " << cos(numero) << endl;
    cout << "coseno mia = " << coseno(numero) << endl;*/
}
