/*Escriba un programa que calcule las soluciones de una ecuación de segundo grado de la forma ax^2 + bx + c = 0, teniendo en cuenta que: se utilizara la formula cuadratica
*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float a,b,c,xuno = 0,xdos =0;
    cout<<"ingrese el valor de a:" <<endl; cin>>a;
    cout<<"ingrese el valor de b:" <<endl; cin>>b;
    cout<<"ingrese el valor de c:" <<endl; cin>>c;
    xuno = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	xdos = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    cout<<"el valor de xuno es: "; cout<<xuno;
    cout<<"\nel valor de xdos es: "; cout<<xdos;
    return 0;
}