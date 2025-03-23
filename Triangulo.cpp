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

int main()
{
    int b,h;
    double result;
    cout <<"********** Área Triángulo **********"<<endl;
    cout <<"*************************************"<<endl<<endl;
    cout << "Ingrese la base = ";
    cin >> b;
    cout << endl<< "Ingrese la altura = ";
    cin >> h;
    clearConsole();
    result = (b*(double)h)/2;
    cout << "*************"<<endl;
    cout << "Triángulo:"<<endl;
    cout << " * área   = "<< result<<endl;
    cout << " * Base   = "<< b<<endl;
    cout << " * Altura = "<< h<<endl<<endl;
    cout << "*************"<<endl;

    return 0;
}

void clearConsole() {
    system(LIMPIAR);
}