/*Ejercicio 5: Escriba un programa que lea de la entrada estándar un carácter e indique en la salida estándar si el carácter es una vocal minúscula o no.

Ejercicio 6: Escriba un programa que lea de la entrada estándar un carácter e indique en la salida estándar si el carácter es una vocal minúscula, es una vocal mayúscula o no es una vocal.*/
#include<iostream>
using namespace std;
int main(){
    string letra;
    cout<<"ingrese una vocal" <<endl; cin>>letra;
    switch (letra)
    {
    case 'a':      
        cout<<"la vocal es una minuscula";
        break;
    case 'A':
        cout<<"la vocal es una mayuscula";
        break;
    default:
        cout<<"no es una vocal"
        break;
    }
    return 0;
}