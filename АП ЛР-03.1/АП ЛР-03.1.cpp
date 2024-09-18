// Lab_03_1.cpp
// < Кісіль Юрій >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 7

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x;
    double y;
    double A; 
    double B; 

    cout << "x = "; cin >> x;
    A = x * x * sin(x / 2);
    if (x <= -5) {
        B = atan(exp(x));
    }
    if (x > -5 && x <= 0) {
        B = 1 + pow(x, 3) / 4;
    }
    if (x > 0) {
        B = log(fabs(x)) - x / 5;
    }
 
    /*

    if (x <= -5) {
        B = atan(exp(x));
    } else 
        if (x > -5 && x <= 0) {
        B = 1 + pow(x, 3) / 4;
        } else
            if (x > 0) {
            B = log(fabs(x)) - x / 5;}

    */

    y = A + B;
    
    cout << "y = " << y << endl;
    return 0;
}

