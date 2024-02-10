/*

Escriba un programa para determinar si un entero es par o impar

*/

#include <iostream>

using namespace std;

int main()
{

    int numero;

    cout << "ingrese el numero: " << endl;
    cin >> numero;

    if (numero % 2 == 0)
    {

        cout << "el numero " << numero << " es par." << endl;
    }
    else
    {

        cout << "el numero " << numero << " es inpar." << endl;
    }

    return 0;
}