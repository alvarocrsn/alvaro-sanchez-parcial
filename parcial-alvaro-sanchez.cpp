#include <iostream>

using namespace std;

void anioBisiesto(){
    int anio;

    cout << "Ingrese el anio que desea saber si es bisiesto " << endl;
    cin >> anio;

    if (anio % 4 == 0){
        cout << "El " << anio << " si es un anio bisiesto" << endl;
    } else {
        cout << "El " << anio << " NO es un anio bisiesto" << endl;
    }
}

void multiplicarInverso(){
    int num, resultado, i;

    cout << "Ingrese el numero que desea obtener su tabla de multiplicacion inversa: " << endl;
        cin >> num;
        for(i=10; i >=1; i--){
            resultado = i * num;
            cout << num << "*" << i << "=" << resultado << endl;
            }
}

void fizzBuzz(){
    int i, num;

cout << "Ingrese el numero que desee" << endl;
cin >> num;

    for (i=1; i <= num; i++){
        if (i % 3 == 0 && i % 5 == 0){
            cout << "FizzBuzz" << endl;
        } else if (i % 3 == 0){
            cout << "Fizz" << endl;
        } else if (i % 5 == 0){
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }
    }
}

int main(){

    int opcion;

    cout << "Ingrese el menu que desea utilizar" << endl;

    cout << "1. Anio bisiesto 2. Tabla multiplicar inversa 3. FizzBuzz 4. Salir " << endl;
    cin >> opcion;

    switch (opcion){
        case 1: anioBisiesto();
            break;
        case 2: multiplicarInverso();
            break;
        case 3: fizzBuzz();
            break;
    }

    return 0;
}
