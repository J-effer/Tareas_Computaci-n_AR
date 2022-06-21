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
    
int codigo;  // define variable de entrada
int a = 1;

cout << "Ingrese su codigo: ";
cin >> codigo;

    
    /*Inicia un bucle que permite realizar la suma del código hasta que no ingrese 00; además, permite
    decidir si el valor ingresado por máquina es el requerido, en este caso, int, sino lo es, informa al usuario del error y pide el ingreso nuevamente*/
while(codigo != 00)
{

    if (typeid(codigo).name() == typeid(a).name())
    {
        cout << "La suma de los digitos del codigo es: " << getSum(codigo) << endl;
        cout << "Ingrese un nuevo codigo: ";
        cin >> codigo;
    }
    
    if(cin.fail()) // Funcion cin.fail() retorna true si se ingresa un valor no correspondiente a la variable definida para el
    {
    cin.clear(); // Elimina el error y permite la continuación del programa
    cin.ignore();
    cout<<"Valor invalido"<<endl;
    cout<<"Ingrese un nuevo codigo" << endl;
    cin >> codigo;
    }
    
}

}

int main()
{
    Principal_Function(codigo);
    return 0;
}
