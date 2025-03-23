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
    double D, d, area;
    
    cout << "********** Área del Rombo **********" << endl;
    cout << "************************************" << endl << endl;
    
    cout << "Ingrese la diagonal mayor: ";
    cin >> D;
    
    cout << "Ingrese la diagonal menor: ";
    cin >> d;

    clearConsole();
    
    area = (D * d) / 2;  // Fórmula corregida
    
    cout << "*************" << endl;
    cout << "Rombo:" << endl;
    cout << " * Área  = " << area << endl;
    cout << " * Diagonal mayor = " << D << endl;
    cout << " * Diagonal menor = " << d << endl;
    cout << "*************" << endl;

    return 0;
}

void clearConsole() {
    system(LIMPIAR);
}
