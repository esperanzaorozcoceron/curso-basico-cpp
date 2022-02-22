#include <iostream>

using namespace std;

int main(){
    
    // bool result = true || true; 
    // cout << result ; 

    int age = 0;
    cout <<"edad: ";
    cin >> age; 

    if (age < 18 || age > 40) {
        cout << "no puedes votar ";
    }
    else {
        cout << "puedes votar";
     }

    // reto resuelto con && 
    // if (age >= 18 && age <= 60) {
    // cout << "You can vote." << endl;}
    // else {
    // cout << "You can't vote." << endl;

}