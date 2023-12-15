#include<iostream>
using namespace std;
int main(){
    double estudiante1, estudiante2, estudiante3, estudiante4, promedio;
    cout<<"ingrese la nota final del primer estudiante:" <<endl; cin>>estudiante1;
    cout<<"ingrese la nota final del segundo estudiante:" <<endl; cin>>estudiante2;
    cout<<"ingrese la nota final del tercer estudiante:" <<endl; cin>>estudiante3;
    cout<<"ingrese la nota final del cuarto estudiante" <<endl; cin>>estudiante4;
    promedio = (estudiante1+estudiante2+estudiante3+estudiante4)/4;
    cout<<"la nota final promedio de los estudiantes es: " <<promedio;
    return 9;
}