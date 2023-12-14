/*escribir la expresion a partido b mas uno como exprecion en c++*/
#include<iostream>
using namespace std;
int main(){
    float a, b, resultado;
    cout<<"ingrese los siguietnes valores: " <<endl;
    cout<<"ingrese el valor de a: "; cin>>a;
    cout<<"ingrese el valor de b; "; cin>>b;
    resultado = (a/b)+1 ;
    cout.precision(2);
    cout<<"el resultado es: " <<resultado;
    return 0;
}