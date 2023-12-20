/*Ejercicio 9: Cambiar un número entero con el mismo valor pero en romanos.

Ejercicio 10: Mostrar los meses del año, pidiéndole al usuario un número entre (1-12), y mostrar el mes al que corresponde.*/
#include<iostream>
using namespace std;
int main(){
    int numero, unidad, decena ,centena, millar;
    cout<<"ingrese un numero" <<endl; cin>>numero;
    unidad = numero%10; numero /= 10; 
    decena = numero%10; numero /= 10;
    centena = numero%10; numero/= 10;
    millar = numero%10; numero /=10;
    
    switch (millar)
    {
    case 1:
        cout<<"M";
        break;
    case 2:
        cout<<"MM";
        break;
    case 3:
        cout<<"MMM";
        break;
    }

    switch (centena)
    {
    case 1:
        cout<<"C";
        break;
    case 2:
        cout<<"CC";
        break;
    case 3:
        cout<<"CCC";
        break;
    case 4:
        cout<<"CD";
        break;
    case 5:
        cout<<"D";
        break;
    case 6:
        cout<<"DC";
        break;
    case 7:
        cout<<"DCC";
        break;
    case 8:
        cout<<"DCCC";
        break;
    case 9:
        cout<<"CM";
        break;
    }

    switch (decena)
    {
    case 1:
        cout<<"X";
        break;
    case 2:
        cout<<"XX";
        break;
    case 3:
        cout<<"XXX";
        break;
    case 4:
        cout<<"XL";
        break;
    case 5:
        cout<<"L";
        break;
    case 6:
        cout<<"LX";
        break;
    case 7:
        cout<<"LXX";
        break;
    case 8:
        cout<<"LXXX";
        break;
    case 9:
        cout<<"XC";
        break;

    }

    switch (unidad)
    {
    case 1:
        cout<<"I";
        break;
    case 2:
        cout<<"II";
        break;
    case 3:
        cout<<"III";
        break;
    case 4:
        cout<<"IV";
        break;
    case 5:
        cout<<"V";
        break;
    case 6:
        cout<<"VI";
        break;
    case 7:
        cout<<"VII";
        break;
    case 8:
        cout<<"VIII";
        break;
    case 9:
        cout<<"IX";
        break;

    }
    

    int mes;
    cout<<"\ningrese un numero del 1 al 12." <<endl; cin>>mes;
    
    switch (mes){
        case 1:
            cout<<"el mes es enero";
            break;
        case 2:
            cout<<"el mes es febrero";
            break;
        case 3:
            cout<<"el mes es marzo";
            break;
        case 4:
            cout<<"el mes es abril";
            break;
        case 5:
            cout<<"el mes es mayo";
            break;
        case 6:
            cout<<"el mes es junio";
            break;
        case 7:
            cout<<"el mes es julio";
            break;
        case 8:
            cout<<"el mes es agosto";
            break;
        case 9:
            cout<<"el mes es septiembre";
            break;
        case 10:
            cout<<"el mes es octubre";
            break;
        case 11:
            cout<<"el mes es noviembre";
            break;
        case 12:
            cout<<"el mes es diciembre";
            break;
        default:
            cout<<"el mes no existe por favor introduzca un mes del 1 al 12";
            break;
    }
    return 0;
    int exe,init,exit;
}