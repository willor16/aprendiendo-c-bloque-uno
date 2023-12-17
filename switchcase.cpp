#include<iostream>
using namespace std;
int main(){
    //usamos un ejemplo basico para aprender el wtitch case
    int numero;
    cout<<"ingrese un numero del 1 al 5" <<endl; cin>>numero;
    switch (numero)
    {
    case 1:
        cout<<"el numero ingresado es 1";
        break;
    case 2:
        cout<<"el numero ingresado es 2";
        break;
    case 3:
        cout<<"el numero ingesado es 3";
        break;
    case 4:
        cout<<"el numero ingesado es 4";
        break;
    case 5:
        cout<<"el numero ingesado es 5";
        break;

    default: cout<<"el numero ingesado no esta en el rango de 1 a 5";
        break;
    }
    return 9;
}