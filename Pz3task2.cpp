#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double x, y;
    cout << "¬вед≥ть x: ";
    cin >> x;

    if (x < 0) {
        y = pow(sin(x), 2);
    }
    else {
        y = log(x + 1);
    }

    cout << "–езультат: y = " << y << endl;
    return 0;
}


