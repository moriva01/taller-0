/*
A fin de recuperar la cartera morosa, a través de la secretaría de hacienda se ha decidido hacer un descuento
a los deudores morosos del impuesto predial para los estratos 1, 2 y 3 de acuerdo con las siguientes condiciones:

Para deudas mayores a 60000 pesos y menores a 150000 pesos se da un descuento del 20%, para deudas entre 150000 pesos
y 300000 se da un descuento del 30% para deudas mayores a 300000 hasta 800000 se da un descuento del 40% para deudas
mayores a 800000 se da un descuento del 50%. Calcular e imprimir el descuento a realizar y el valor a pagar con descuento.

*/

#include <iostream>

using namespace std;

int main()
{
    string Nombre_moroso;
    int total_mora;
    int estrato_moroso;

    cout << "Bienvenido al sistema de cartera morosa de la secretaría de hacienda" << endl;
    cout << " por favor digite su nombre: " << endl;
    cin >> Nombre_moroso;
    cout << "por favor digite su estrato: " << endl;
    cin >> estrato_moroso;
    cout << "por favor digite el saldo total de su deuda: " << endl;
    cin >> total_mora;

    if (estrato_moroso == 1 || estrato_moroso == 2 || estrato_moroso == 3)
    {

        int total_descuento;

        if (total_mora < 60000)
        {
            cout << "Estimado(a), " << Nombre_moroso << endl;
            cout << "su deuda no tiene ningun tipo de descuento" << endl;
        }

        if (total_mora >= 60000 && total_mora < 150000)
        {

            total_descuento = total_mora - ((20 * total_mora) / 100);
            cout << endl
                 << "-----------------------------------------------------------------------------------------------------------------------" << endl;
            cout << "Estimado(a), " << Nombre_moroso << endl;
            cout << " su deuda total es de: " << total_mora << ", podemos realizar un descuento del 20% para esa deuda" << endl;
            cout << "total de su deuda con descuento: " << total_descuento;
            cout << endl
                 << "-----------------------------------------------------------------------------------------------------------------------" << endl;
        }

        if (total_mora >= 150000 && total_mora < 300000)
        {

            total_descuento = total_mora - ((30 * total_mora) / 100);
            cout << endl
                 << "-----------------------------------------------------------------------------------------------------------------------" << endl;
            cout << "Estimado(a), " << Nombre_moroso << endl;
            cout << " su deuda total es de: " << total_mora << ", podemos realizar un descuento del 30% para esa deuda" << endl;
            cout << "total de su deuda con descuento: " << total_descuento;
            cout << endl
                 << "-----------------------------------------------------------------------------------------------------------------------" << endl;
        }

        if (total_mora >= 300000 && total_mora < 800000)
        {

            total_descuento = total_mora - ((40 * total_mora) / 100);
            cout << endl
                 << "-----------------------------------------------------------------------------------------------------------------------" << endl;
            cout << "Estimado(a), " << Nombre_moroso << endl;
            cout << " su deuda total es de: " << total_mora << ", podemos realizar un descuento del 40% para esa deuda" << endl;
            cout << "total de su deuda con descuento: " << total_descuento;
            cout << endl
                 << "-----------------------------------------------------------------------------------------------------------------------" << endl;
        }

        if (total_mora >= 800000)
        {

            total_descuento = total_mora - ((50 * total_mora) / 100);
            cout << endl
                 << "-----------------------------------------------------------------------------------------------------------------------" << endl;
            cout << "Estimado(a), " << Nombre_moroso << endl;
            cout << " su deuda total es de: " << total_mora << ", podemos realizar un descuento del 50% para esa deuda" << endl;
            cout << "total de su deuda con descuento: " << total_descuento;
            cout << endl
                 << "-----------------------------------------------------------------------------------------------------------------------" << endl;
        }
    }
    else
    {
        cout << "Descuento no disponible para el estrato " << estrato_moroso << endl;
    }

    return 0;
}