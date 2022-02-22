#include <iostream> //include me permite importar una libreria de codigo que contiene funcionalidades necesarias que se puedan necesitar 
// iostream permite recibir y mostrar datos (iostream = Input/OutPut stream)

using namespace std; //nos permite utilizar espacio de nombres de c++ dentro de nuestro programa  que pueden ser piezas de codigo reutilizables para poder importarlas sin importar desde donde las estamos importando

// int sirve para declarar variables y funciones, es el punto de entrada 
int main(){
    // cout y endl es una funcion del namespace 'std'
    int age = 24; // tipo de dato, nombre variale y valor 
    const char name = 'E'; // const no permite modificar el valor de nuestra variable 
    int ageList[] = {  // [] me indican que es una lista
        18, 24, 15, 0
    };
    cout << "Hello World" << endl; //nos permite crear una cadena de texto
    cout << "Bye World" << endl;// endl cambio de linea 
    cout << name << endl;
    cout << age <<endl;
    cout << ageList[0];
    //cada vez que terminamos de darle una orden a nuestra computadora por medio de una linea de codigo debemos poner ; 
}
