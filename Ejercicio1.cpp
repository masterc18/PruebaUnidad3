#include <iostream>

using namespace std;

void Numeros();

void Numeros()
{
    int num;

    cout << "Dime un numero " << endl;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        if (num % 2 == 0)
        {
            cout << "El numero es par " << endl;
        }
        else
        {
            cout << "Es impar " << endl;
        }
    }
}