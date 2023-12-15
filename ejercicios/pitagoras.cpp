#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float catetoa,catetob,hipotenusa;
    cout<<"ingrese el valor del cateto a: " <<endl; cin>>catetoa;
    cout<<"ingrese el valor del cateto b: " <<endl; cin>>catetob;
    hipotenusa = sqrt((pow(catetoa,2))+(pow(catetob,2)));
    cout<<"la hipotenusa de los dos catetos es: " <<hipotenusa;
    return 0;
}