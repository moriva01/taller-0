/*
Dado como dato el sueldo de un trabajador, aplíquele un aumento del 15% si su sueldo es inferior a $1000000.  Imprima en este caso el nuevo sueldo del trabajador
*/

#include <iostream>

using namespace std;

int main()
{

    double sueldo_trabajador;

    cout << "ingrese el sueldo actual del trabajador" << endl;
    cin >> sueldo_trabajador;

    if (sueldo_trabajador < 1000000)
    {

        double ajuste_sueldo = ((15 * sueldo_trabajador) / 100) + sueldo_trabajador;
        cout << "el nuevo sueldo con su ajuste es de: " << ajuste_sueldo << " ,pesos" << endl;
    }
    else
    {

        cout << "el sueldo no clasifica para un ajuste" << endl;
    }

    return 0;
}