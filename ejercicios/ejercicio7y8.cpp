/*Ejercicio 7: Escriba un programa que solicite una edad (un entero) e indique en la salida estándar si la edad introducida está en el rango [18-25].

Ejercicio 8: Escribe un programa que lea de la entrada estándar tres números. Después debe leer un cuarto número e indicar si el número coincide con alguno de los introducidos con anterioridad.*/
#include<iostream>
using namespace std;
int main(){
    int edad;
    cout<<"ingrese su edad." <<endl; cin>>edad;
    if (edad>= 18 & edad<= 25){
        cout<<"la edad esta dentro del rango ";
    }else{
        cout<<"la edad no esta en el rango de 18 a 25"<<endl;

    }
    
    int uno,dos,tres,cuatro;
    cout<<"ingrese tres numeros" <<endl; cin>>uno; cin>>dos;cin>>tres;
    cout<<"ingrese un cuarto numero para comparar" <<endl; cin>>cuatro;
    if (cuatro == uno)
    {
        cout<<"el numero ingresado y el numero "<<uno <<" son iguales";
    } else if(cuatro == dos){
        cout<<"el numero ingresado y el numero "<<dos <<" son iguales";
    } else if(cuatro == tres){
        cout<<"el numero ingresado y el numero "<<dos <<" son iguales";
    }else {
        cout<<"el numero ingresado no es igual a ningun numero";
    }
    return 0;
}