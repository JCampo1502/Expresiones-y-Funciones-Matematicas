#include <iostream>
#include <cmath>

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
    double r, area;
    
    cout << "********** Área del Círculo **********" << endl;
    cout << "**************************************" << endl << endl;
    
    cout << "Ingrese el radio: ";
    cin >> r;

    clearConsole();
    
    area = M_PI * pow(r, 2); 
    
    cout << "*************" << endl;
    cout << "Círculo:" << endl;
    cout << " * Área  = " << area << endl;
    cout << " * Radio = " << r << endl;
    cout << "*************" << endl << endl;

    return 0;
}

void clearConsole() {
    system(LIMPIAR);
}
