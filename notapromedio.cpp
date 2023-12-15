/*La calificación final de un estudiante es la media ponderada de tres notas: la nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta un 60% y la nota de participación que cuenta el 10% restante. Escriba un programa que lea de la entrada estándar las tres notas de un alumno y escriba en la salida estándar su nota final.*/
#include<iostream>
using namespace std;
int main(){
    float practicas, teorica, participacion,notafinal;
    cout<<"ingrese la nota de practicas:" <<endl; cin>>practicas ;
    cout<<"ingrese la nota de teoria:" <<endl; cin>>teorica ;
    cout<<"ingrese la nota de participacion:" <<endl; cin>>participacion ;
    notafinal = (practicas*0.30)+(teorica*0.60)+(participacion*0.10);
    cout<<"la nota final es: " <<notafinal;
    return 0;
}