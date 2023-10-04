
// CALCULO AREA DEL TRAPECIO

#include <iostream>

using namespace std;

int main()
{

     /* Declaro variables */

     float b, B, H, area;

     // mensaje en pantalla

     cout << "Bienvenido si deseas calcular el area de un trapecio ingresa las dimensiones"
          << "\n";

     cout << "Ingrese la medida de la Base inferior (B)"
          << "\n";
     cin >> B; // captura del valor ingresado por el usuario

     cout << "Ingrese la medida de la Base superior(b)"
          << "\n";
     cin >> b; // captura del valor ingresado por el usuario

     cout << "Ingrese la medida de la altura (H)"
          << "\n";
     cin >> H; // captura del valor ingresado por el usuario

     // formula para calcular el area de un trapecio

     area = ((B + b) / 2) * H;

     cout << "El area del trapecio es: " << area << endl;

     system("pause");

     return 0;
}