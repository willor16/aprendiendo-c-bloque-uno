/*Ejercicio 11: Hacer un programa que simule un cajero automático con un saldo inicial de 1000 Dólares.*/
#include<iostream>
using namespace std;
int main(){
    int init=1000, option;
    cout<<"el saldo de la cuenta es:" <<endl;
    cout<<init <<endl;
    cout<<"****************************"<<endl;
    cout<<"ingrese una opcion de retiro"<<endl;
    cout<<"****************************"<<endl;
    cout<<"1) retirar 50" <<endl <<"2) retirar 100" <<endl <<"3) retirar 200" <<endl <<"4) retirar 500" <<endl <<"5) retirar 1000" <<endl;
    cin>>option;
    switch (option)
    {
    case 1:
        init -= 50;
        cout<<"retiro 50 el saldo es: " <<init;
        break;
    case 2:
        init -= 100;
        cout<<"retiro 100 el saldo es: " <<init;
        break;
    case 3:
        init -= 200;
        cout<<"retiro 200 el saldo es: " <<init;
        break;
    case 4:
        init -=500;
        cout<<"retiro 500 el saldo es: " <<init;
        break;
    case 5:
        init -= 1000;
        cout<<"reitro 1000 el saldo es: " <<init;
        break;
    default:
        cout<<"el valor ingresado es nulo, no pertenece aninguna opcion, velva a intentar :)";
        break;
    }
    return 0;
}