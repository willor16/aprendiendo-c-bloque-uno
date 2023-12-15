#include<iostream>
using namespace std;
int main(){
    double a,b,c,d,e,f,op;
    cout<<"ingrese un valor de a" <<endl; cin>>a;
    cout<<"ingrese un valor de b" <<endl; cin>>b;
    cout<<"ingrese un valor de c" <<endl; cin>>c;
    cout<<"ingrese un valor de d" <<endl; cin>>d;
    cout<<"ingrese un valor de e" <<endl; cin>>e;
    cout<<"ingrese un valor de f" <<endl; cin>>f;
    op = (a+(b/c))/(d+(e/f));
    cout<<"\nel resultado de la operacion es: " <<op;
    return 0;
}