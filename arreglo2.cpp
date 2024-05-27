#include <iostream>
using namespace std;
int main (){

    int n= 0; 

    cout << "Defina el tamaño del arreglo:\n"; cin >> n;

    int num [n];
    int par [n];
    int j = 0;

    for (int i = 0; i < n; i++){

        cout <<"Ingrese numero entero: "; cin >> num [i];

        if (num [i] % 2 == 0){

            par [j]= num[i]; 
            j++;
        }

    }

    cout << "El arreglo original es: " << "\n";

    for ( int i= 0; i < n; i ++){

        cout << num [i] << "\n";
    }
    
    cout << "El arreglo de pares es: " << "\n";

    for (int k = 0; k < j; k++){

        cout << par [k] << "\n";
    }
    
    return 0; 
}