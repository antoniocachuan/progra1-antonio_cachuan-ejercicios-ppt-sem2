#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    // insert code here...
    const double PI = 3.1416;
    float *radio;
    radio = new float;
    
    cout << "Ingrese el radio: ";
    cin >> *radio;
    
    cout << "El área de la esfera es: " << 4 * PI * *radio * *radio << "\n";
    cout << "El volumen de la esfera es: " << (4 * PI * *radio * *radio * *radio) / 3 << "\n";
    
    
    system("pause");
    
    return 0;
}