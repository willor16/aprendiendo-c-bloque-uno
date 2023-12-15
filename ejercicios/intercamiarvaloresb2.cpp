/*programa que pida un valor x y un valor y, luego los valores se intercambien y se muestre en pantalla*/
#include<iostream>
using namespace std;
int main(){
    double x,y,transition;
    cout<<"ingrese el valor de x" <<endl; cin>>x;
    cout<<"ingrese el valor de y" <<endl; cin>>y;
    transition = x;
    x=y;
    y=transition;
    cout<<"los valores intercambiados son x; " <<x <<" y: "<<y;
    return 0;
}