/*realizar un programa que lea la entrada estandar de los siguientes datos de una persona:
edad: dato de tipo entero
sexo: dato de tipo caracter
altura en metros: dato de tipo real
tras leer los datos, el programa debe mostrarlos en la salida estandar*/
#include<iostream>
using namespace std;
int main(){
    //agrego las variables
    int edad;
    char sexo[10];
    float altura;
    cout<<"ingrese sus edad: "; cin>>edad;
    cout<<"\ningrese su sexo: "; cin>>sexo;
    cout<<"\ningrese su altura en metros: "; cin>>altura;
    // mostrando mensajes de altura edad y sexo
    cout<<"\nlos datos son:"<<endl;
    cout<<"edad: " <<edad <<" sexo: " <<sexo<<" altura:"<<altura;
    return 0;
}