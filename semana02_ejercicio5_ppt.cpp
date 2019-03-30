#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    // insert code here...
    int *a = new int;
    
    int *m = new int;
    int *c = new int;
    int *d = new int;
    int *u = new int;
    *a = 4923;
    
    *m = *a/1000;
    *c = (*a - *m*1000)/100;
    
    *d = (*a - *m*1000 - *c*100)/10;
    
    *u = (*a - *m*1000 - *c*100 - *d*10);
    
    cout << *u << *d << *c << *m << "\n";
    
    system("pause");
    
    return 0;
}