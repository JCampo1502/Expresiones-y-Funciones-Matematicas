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
    int a,b,result;
    cout <<"********** Área Rectángulo **********"<<endl;
    cout <<"*************************************"<<endl<<endl;
    cout << "Ingrese el lado a = ";
    cin >> a;
    cout << endl<< "Ingrese el lado b = ";
    cin >> b;
    clearConsole();
    result = a*b;
    cout << "*************"<<endl;
    cout << "Rectángulo:"<<endl;
    cout << " * área   = "<< result<<endl;
    cout << " * lado A = "<< a<<endl;
    cout << " * lado B = "<< b<<endl<<endl;
    cout << "*************"<<endl;





    return 0;
}

void clearConsole() {
    system(LIMPIAR);
}