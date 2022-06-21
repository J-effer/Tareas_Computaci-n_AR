/* Evaluación 1;
Jefferson Gómez Herrera 2201293 */
#include <iostream>
#include <typeinfo>

using namespace std;

/* Función que proporciona la suma de los digitos de un número*/
int getSum(int n)
{
    int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}


int Principal_Fuction()
{
    
int codigo;
int a = 1;
//char b = 'A' ;
cout << "Ingrese su codigo: ";
cin >> codigo;

while(codigo != 00)
{

    if (typeid(codigo).name() == typeid(a).name())
    {
        cout << "La suma de los digitos del codigo es: " << getSum(codigo) << endl;
        cout << "Ingrese un nuevo codigo: ";
        cin >> codigo;
    }
    
    if(cin.fail())
    {
    cin.clear();
    cin.ignore();
    cout<<"Valor invalido"<<endl;
    cout<<"Ingrese un nuevo codigo" << endl;
    cin >> codigo;
    }
    
}

}