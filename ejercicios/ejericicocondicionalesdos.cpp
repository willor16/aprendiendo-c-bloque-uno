#include<iostream>
using namespace std;
int main(){
    int edad, experiencia;
    string sexo, idioma, puesto, carrera;
    cout<<"*********************************************************" <<endl;
    cout<<"usted es menor de edad?, ingrese su edad para corroborar:" <<endl;
    cout<<"*********************************************************" <<endl;
    cin>>edad;
    if (edad>= 18)
    {
        cout<<"cargando espere porfavor";
        cout<<"ingrese su sexo:" <<endl; cin>>sexo;
        cout<<"ingrese su idioma:" <<endl; cin>>idioma;
        cout<<"ingrese su puesto:" <<endl; cin>>puesto;
        cout<<"ingrese su carrera:" <<endl; cin>>carrera;
        cout<<"ingrese sus años de experiencia:" <<endl; cin>>experiencia;

        cout<<"sus datos son: "<<endl;
        cout<<sexo<<endl;
        cout<<idioma<<endl;
        cout<<puesto<<endl;
        cout<<carrera<<endl;
        cout<<experiencia<<endl;


    }else{
        cout<<"usted es menor de edad no puede optar a empelos solo pasantias agradecemos su comprencion";
    }
    return 0;
}