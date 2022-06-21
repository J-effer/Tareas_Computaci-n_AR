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
cout << "Ingrese su codigo: ";
cin >> codigo;
while(codigo != 0){

    cout << "La suma de los digitos de su codigo es: ";
    cout <<  getSum(codigo);
    cout << "\nIngrese su codigo: ";
    cin >> codigo;
}
}


int main() {

  Principal_Fuction();



  return 0;
}
