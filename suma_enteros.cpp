/*

Escriba un programa que usa while para la sumar los números enteros de 1 a 100.

*/

#include <iostream>

using namespace std;

int main()
{

    int numero = 0, suma = 0;

    while (numero <= 100)
    {
        suma += numero;
        numero++;
    }

    cout << "la suma de 1 a 100 es: " << suma << endl;
    return 0;
}