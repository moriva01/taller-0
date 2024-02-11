#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    double numero_1, numero_2;

    cout << "Ingrese el primer nuemro: " << endl;
    cin >> numero_1;
    cout << endl
         << "Ingrese el segundo numero: " << endl;
    cin >> numero_2;

    cout << "suma: " << numero_1 + numero_2 << endl;
    cout << "resta: " << numero_1 - numero_2 << endl;
    cout << "multiplicacion: " << numero_1 * numero_2 << endl;

    if (numero_2 != 0)
    {

        cout << "division: " << numero_1 / numero_2 << endl;
    }
    else
    {
        cout << "no se puede dividir por 0" << endl;
    }

    cout << "cuadrado del primer numero: " << numero_1 * numero_1 << endl;

    if (numero_2 >= 0)
    {
        cout << "raiz cuadrada del segundo numero: " << sqrt(numero_2) << endl;
    }
    else
    {

        cout << "no se pueden hacer raices de negativos" << endl;
    }

    return 0;
}