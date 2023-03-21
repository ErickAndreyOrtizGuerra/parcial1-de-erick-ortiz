/*Erick Andrey Ortiz Guerra 0909 22 17063*/
#include <iostream>

using namespace std;

int main() {
    int numerofacto, factorial = 1, numeroprimo, numeroparoim, numerotabla;
    bool es_primo = true;

    cout << "Ingrese un numero: ";
    cin >> numerofacto;

    for (int i = 2; i <= numerofacto; i++) {
        factorial *= i;
    }

    cout << "el factorial del  " << numerofacto << " es: " << factorial << endl;


    cout << "Ingrese un numero por favor : ";
    cin >> numeroprimo;

    for (int i = 2; i <= numeroprimo / 2; i++) {
        if (numeroprimo % i == 0) {
            es_primo = false;
            break;
        }
    }

    if (es_primo) {
        cout << numeroprimo << " es primo" << endl;
    } else {
        cout << numeroprimo << " no es primo" << endl;
    }


    cout << "Ingrese un numero:";
    cin >> numeroparoim;

    if (numeroparoim % 2 == 0) {
        cout << numeroparoim << "es un numero par" << endl;
    } else {
        cout << numeroparoim << "es un numero impar" << endl;
    }


    cout << "ingrese un numero: ";
    cin >> numerotabla;

    cout << "tabla de multiplicar de " << numerotabla << ":" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << numerotabla << " x " << i << " = " << numerotabla * i << endl;
    }

    return 0;
}