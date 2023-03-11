/*  Erick Andrey Ortiz Guerra 0909-22-17063 PRIMER PARCIAL*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int numero, num3=3, num7=7, num9=9, diadelasemana;
    string lineacreada;
    string fraseagregada;
    string lineadd;

    /*cout <<"Ingrese el numero de la tabla de multiplicar que desea ver: ";
    cin >>numero;

    cout <<"La tabla de multiplicar del " <<numero<< ":\n";

    for (int i = 1; i <= 10; i++) {
         cout << numero << " x " << i << " = " << numero * i << endl;
    }
    */
  /*  cout << "Tabla del 3:\n";

    while (num3 <= 30) {
        cout << "3 x " << num3 / 3 << " = " << num3 << endl;
        num3 += 3;
    }

    cout << "Tabla del 7:\n";

    while (num7 <= 70) {
        cout << "7 x " << num7 / 7 << " = " << num7 << endl;
        num7 += 7;
    }

    cout << "Tabla del 9:\n";

    while (num9 <= 90) {
        cout << "9 x " << num9 / 9 << " = " << num9 << endl;
        num9 += 9;
    } */

    /*
    cout <<"Ingrese el numero del 1 al 7 (Representa los dias de la semana): ";
    cin >>diadelasemana;

    switch(diadelasemana) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout <<"Es un dia de trabajo " <<endl;
            break;
        case 6:
        case 7:
            cout <<"No es un dia de trabajo " <<endl;
            break;
        default:
            cout <<"Ingrese nada mas un numero del 1 al 7 por favor :) "<<endl;
            break;
    } */


    ifstream archivo1;
    archivo1.open("parcial.txt.txt");
    getline(archivo1,lineacreada);
    archivo1.close();


    ofstream archivo2;
    archivo2.open("nuevocontenido.txt");
    archivo2 <<fraseagregada+" "+lineacreada;
    archivo2.close();

    ifstream datos;
    datos.open("nuevocontenido.txt");
    getline(datos,lineadd);
    datos.close();
    cout <<lineadd;


    return 0;
}