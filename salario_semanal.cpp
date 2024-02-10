/*
Elaborar un programa, para calcular  el salario semanal de un empleado al que se le paga 40000 pesos por hora
si estas no superan las 35 horas. Cada hora por encima de 35 se considera extras y se paga a 5000 pesos.
*/

#include <iostream>

using namespace std;

int main()
{

    int horas_trabajadas;
    int salario_semanal;

    cout << "ingrese el total de horas trabajadas: " << endl;
    cin >> horas_trabajadas;

    if (horas_trabajadas <= 35)
    {

        salario_semanal = horas_trabajadas * 40000;
    }
    else
    {

        salario_semanal = horas_trabajadas * 40000 + ((horas_trabajadas - 35) * 5000);
    }
    cout << "Su salario semanal es de: " << salario_semanal << " pesos." << endl;
    return 0;
}