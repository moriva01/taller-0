/*
Una empresa de telefonía celular tiene esquemas de descuento en sus planes de prepago y postpago, así:
   • Para prepago por compra de equipos entre $100000 y $900000, el descuento es del 10% y el 20% de descuento, superiores a $1000000.
   • En postpago si el plan cuesta menos de $500.000, el descuento es de 15%, si está entre $500.000 y 1000000 el descuento es del 20% y para valores superiores es del 25%.
   • Dada la compra de un plan, identificar el descuento realizado y el valor neto de la compra.
*/

#include <iostream>

using namespace std;

int main()
{
   int tipo_plan;
   int precio_plan, descuento, precio_neto;

   cout << "Ingrese el tipo de plan (1 para prepago, 2 para postpago): ";
   cin >> tipo_plan;

   if (tipo_plan == 1)
   {
      cout << "Ingrese el precio del plan: ";
      cin >> precio_plan;

      if (precio_plan >= 100000 && precio_plan <= 900000)
      {
         descuento = (precio_plan * 10) / 100;
      }
      else if (precio_plan > 1000000)
      {
         descuento = (precio_plan * 20) / 100;
      }
      else
      {
         descuento = 0;
      }

      precio_neto = precio_plan - descuento;

      cout << "Descuento realizado: " << descuento << endl;
      cout << "Valor neto de la compra: " << precio_neto << endl;
   }
   else if (tipo_plan == 2)
   {
      cout << "Ingrese el precio del plan: ";
      cin >> precio_plan;

      if (precio_plan < 500000)
      {
         descuento = (precio_plan * 15) / 100;
      }
      else if (precio_plan >= 500000 && precio_plan <= 1000000)
      {
         descuento = (precio_plan * 20) / 100;
      }
      else
      {
         descuento = (precio_plan * 25) / 100;
      }

      precio_neto = precio_plan - descuento;

      cout << "Descuento realizado: " << descuento << endl;
      cout << "Valor neto de la compra: " << precio_neto << endl;
   }
   else
   {
      cout << "Tipo de plan no válido" << endl;
   }

   return 0;
}
