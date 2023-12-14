//escribir un programa que lea la entrada estandar de dos numeros y muestre la salida estandar su suma, resta, multiplicacion y divicion 
#include<iostream>
using namespace std;

int main(){
    int primero;
    int segundo;
    int suma;
    int resta;
    int multiplicacion;
    int divicion;
    cout<<"ingrese dos numeros"<<endl;
    cin>>primero;
    cin>>segundo;
    suma = primero + segundo;
    resta = primero - segundo;
    multiplicacion = primero * segundo;
    divicion = primero / segundo;
    cout<<"la suma es: "<<suma<<" la resta es: "<<resta<<" la multiplicacion es: "<<multiplicacion<<" la divicion es: "<<divicion;
    return 0;
}