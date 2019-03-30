#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    // insert code here...
    float *a;
    a = new float;
    
    cout << "Ingrese un número decimal: ";
    cin >> *a;
    
    cout << "La parte entera es: " << (int) *a << "\n";
    cout << "La parte decimal es: " << (float)(*a-(int)*a) << "\n";
    
    system("pause");
    
    return 0;
}