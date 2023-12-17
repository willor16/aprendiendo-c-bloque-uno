/*Escriba un programa que lea tres números y determine cuál de ellos es el mayor.*/
#include<iostream>
using namespace std;
int main(){
    int uno,dos,tres;
    cout<<"ingrese tres numeros." <<endl; cin>>uno; cin>>dos; cin>>tres;
    //aca va la logica de la condicional
    if (uno>dos & uno>tres)
    {
        cout<<"el mayor es el numero " <<uno;

    }else if(dos>tres & dos>uno){
        cout<<"el numero mayor es " <<dos;
    }
    else{
        cout<<"el mayor es " <<tres;
    }
    
    return 0;
}