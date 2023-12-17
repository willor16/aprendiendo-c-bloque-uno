/*Realice un algoritmo que lea un valor entero y determine si se trata de un número par o impar.*/
#include<iostream>
using namespace std;
int main(){
    float numero;
    int mitad;
    float comprobacion;
    /*segun la logica dividimos un numero entre dos si el resultado tiene un residuo entonces no es par*/
    cout<<"************************" <<endl;
    cout<<"ingrese un numero entero" <<endl; 
    cout<<"************************" <<endl;
    cin>>numero;
    mitad = numero/2;
    comprobacion = (numero/2)- mitad;
    if (comprobacion == 0){
        cout<<"el numero ingresado es par";
    }else{
        cout<<"el numero ingresado es impar" <<endl;
    }

    cout<<"********************************************************" <<endl;
    cout<<"ingrese un numero para evaluar si es positivo o negativo" <<endl; 
    cout<<"********************************************************" <<endl;
    float numerodos;
    cin>>numerodos;
    if (numerodos < 0){
        cout<<"el numero ingresado es negativo";
    }else if(numerodos == 0){
        cout<<"el numero igresado es cero";

    }else{
        cout<<"el numero ingresado es positivo";
    }
    return 0;
}