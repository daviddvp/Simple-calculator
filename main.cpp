#include <iostream>
using namespace std;
float num1;
float num2;
float result;

int main () {
    char opcion;
    cout << "a. Suma." "\n";
    cout << "b. Resta." "\n";
    cout << "c. Multiplicacion." "\n";
    cout << "d. Divison." "\n";
    cout << "e. Informacion" "\n";
    cout << "f. Salir" "\n";

    cout << "Introduce una opcion ";
    cin >> opcion;

    while ( opcion == 'a') { // Suma
        cin >> num1 ;
        cin >> num2 ;
        result = num1 + num2;
        if (result < 0) { // Si el resultado es menor que cero muestra error
            cout << "Error, introude los numeros de nuevo" << endl;
        }
        else { // Sino, dime el resultado
        cout << "El resultado es " << result <<"\n";
            main ();
        }
    
    }
    while (opcion == 'b') // Resta
    {
        cin >> num1;
        cin >> num2;
        result = num1 - num2;
        cout << "El resultado es " << result <<"\n";
        main();
       
    }
    while (opcion == 'c') { //Multiplicacion
        cin >> num1;
        cin >> num2;
        result = num1*num2;
        cout << "El resultado es " << result <<"\n";
        main();
    }
    while (opcion == 'd') { //Division
        cin >> num1;
        cin >> num2;
        result= num1/num2;
        if (result <0) {
            cout << "Error, introduce los numero de nuevo" << endl; // Si el resultado es menor que cero muestra error
        }
        else {
            cout << "El resultado es "  << result <<"\n";// Sino, dime el resultado
            main();
            }
    }

    while (opcion == 'e') { // Informacion del programa
        cout << "---### ESTE PROGRAMA ES UNA PRUEBA #####---" << endl
        << "Creado por David DVP" << endl
        << "Escrito en C++" << endl
        << "Debian GNU/Linux 11 (bullseye)" << endl
        << "GNOME 3.38.6" << endl
        << " Version 0.001" << endl
        << "@GPL General Public License" << endl
        << "---######## FREE AS IN FREEDOM ########---" "\n"
        << endl;
        main ();
    }
    
    while (opcion == 'f') {
        cout << "Saliendo del programa... " << endl;
        break;
    }
   
}
