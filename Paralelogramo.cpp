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
    double b, h, area;
    
    cout << "********** Área del Paralelogramo **********" << endl;
    cout << "********************************************" << endl << endl;
    
    cout << "Ingrese la base: ";
    cin >> b;
    
    cout << "Ingrese la altura: ";
    cin >> h;

    clearConsole();
    
    area = b * h;
    
    cout << "*************" << endl;
    cout << "Paralelogramo:" << endl;
    cout << " * Área   = " << area << endl;
    cout << " * Base   = " << b << endl;
    cout << " * Altura = " << h << endl;
    cout << "*************" << endl << endl;

    return 0;
}

void clearConsole() {
    system(LIMPIAR);
}
