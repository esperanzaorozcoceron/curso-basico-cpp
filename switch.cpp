#include <iostream>

using namespace std;

int main(){
    int opt = 0;
    cout << "introduce una opcion: ";
    cin >> opt; 
    switch (opt)
    {
    case 1:
        cout << "opcion 1";
        break;
     case 2:
        cout << "opcion 2";
        break;
     case 3:
        cout << "opcion 3";
        break;
    
    default:
        cout <<"marca una opcion correcta"; 
        break;
    }
}