#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    // insert code here...
    float *f;
    f = new float;
    
    cout << "Ingrese los grados Farenheit: ";
    cin >> *f;
    
    cout.precision(4);
    cout << *f << "Fº = " <<  (*f - 32) * ((float)5/(float)9) << "Cº\n";
    system("pause");
    
    return 0;
}