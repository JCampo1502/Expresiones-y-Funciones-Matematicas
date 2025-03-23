#include <iostream>

#ifdef _WIN32
    #include <windows.h>
    #define LIMPIAR "cls"
#else
    #include <cstdlib>
    #define LIMPIAR "clear"
#endif

using namespace std;

void clearConsole();

int main() {    
    double B, b, h, area;
    
    cout << "********** Área del Trapecio **********" << endl;
    cout << "****************************************" << endl << endl;
    
    cout << "Ingrese la base mayor: ";
    cin >> B;
    
    cout << "Ingrese la base menor: ";
    cin >> b;
    
    cout << "Ingrese la altura: ";
    cin >> h;

    clearConsole();
    
    area = ((B + b) * h) / 2;
    
    cout << "*************" << endl;
    cout << "Trapecio:" << endl;
    cout << " * Área  = " << area << endl;
    cout << " * Base mayor = " << B << endl;
    cout << " * Base menor = " << b << endl;
    cout << " * Altura = " << h << endl;
    cout << "*************" << endl << endl;

    return 0;
}

void clearConsole() {
    system(LIMPIAR);
}
