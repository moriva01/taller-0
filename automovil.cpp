/*

Un primer automóvil se mueve de la ciudad A a la ciudad B, otro automóvil se mueve de la ciudad B a la ciudad A,
ambos se desplazan con movimiento rectilíneo uniforme. Si se conocen sus velocidades y la distancia entre
la ciudad A y la ciudad B, calcular el tiempo al cabo del cual los automóviles se encuentran.

*/

#include <iostream>

using namespace std;

int main()
{

    double velocidad_auto_1, velocidad_auto_2, distancia;

    cout << "digite la velocidad del primer auto: " << endl;
    cin >> velocidad_auto_1;
    cout << "digite la velocidad del segundo auto: " << endl;
    cin >> velocidad_auto_2;
    cout << "digite la distancia entre ambas ciudades: " << endl;
    cin >> distancia;

    double velocidad_promediada = velocidad_auto_1 + velocidad_auto_2;
    double encuentro_tiempo = distancia / velocidad_promediada;

    cout << "los autos se encontraran en " << encuentro_tiempo << " ,horas" << endl;

    return 0;
}