/* Evaluación 1;
Jefferson Gómez Herrera 2201293 */
#include <stdio.h>


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


    do
    {


    printf("Ingrese su codigo: ");

    if (scanf("%d", &codigo)){


        if(codigo != 00){
            printf("La suma de su codigo es: %d", getSum(codigo));
            printf("\n");


        }
        else{break;}
    }
    else{
        printf("Valor invalido \n");



    }

    }

    while(scanf("%c",&codigo) );
}


int main()
{

    Principal_Fuction();


    return 0;

}
