#include <iostream>

using namespace std;

int suma(int a, int b)
{
    return a + b;
}

int multiplicar(int a, int b = 2) //Aqui declaramos un valor por defecto para el ultimo argumento de la funcion
{
    return a * b;
}

int main()
{
    cout << multiplicar(200);
}