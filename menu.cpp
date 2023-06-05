#include <iostream>
#include "Ejercicio1.cpp"
#include "Ejercicio2.cpp"

using namespace std;

void menu()
{
    int op;
    do
    {

        system("color 02");
        system("cls");
        cout << "=======================Bienvenido a mi tercera prueba===================" << endl;
        cout << "1. Ver si un numero es impar o impar " << endl;
        cout << "2. ver el calculo factorial de un numero " << endl;
        cout << "3. Salir " << endl;
        cin >> op;
        

        switch (op)
        {
        case 1:

            Numeros();
            break;

        case 2:
            CalcularFactorial();
            break;
        case 3:
            cout << "Saliendo............" << endl;
            break;

        default:
            cout << "Opcion invalida " << endl;
            break;
        }
        system("pause");
    } while (op != 3);
}