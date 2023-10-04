// OPERACIONES ARITMETICAS

#include <iostream>  //Biblioteca estandar que permite entrada/salida

using namespace std;

int main()
{

    int num1, num2;
    int suma, resta, multi, divi;

    cout << "Bienvenido ingresa 2 numeros se realizaran las operaciones +-*/" << endl;

    cout << "Ingrese el primer numero" << endl;
    cin >> num1;

    cout << "Ingrese el segundo numero" << endl;
    cin >> num2;

    suma = num1 + num2;
    resta = num1 - num2;
    multi = num1 * num2;
    divi = num1 / num2;

    cout << "La suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "La multi es: " << multi << endl;
    cout << "La divi es: " << divi << endl;

    system("pause");
    return 0;
}