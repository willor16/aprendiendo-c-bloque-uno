/*Escriba un programa que lea dos números y determine cuál de ellos es el mayor.*/
#include<iostream>
using namespace std;
int main(){
    int uno,dos;
    cout<<"ingrese el valor del primer numero" <<endl; cin>>uno;
    cout<<"ingrese el valor del segundo numero" <<endl; cin>>dos;
    if (uno<dos)
    {
        cout<<"el numero mayor es: " <<endl; cout<<dos;
    }else{
        cout<<"el numero menor es: " <<endl; cout<<uno;
    }
    
    return 0;
}