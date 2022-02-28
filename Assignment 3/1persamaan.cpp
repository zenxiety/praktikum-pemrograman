#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float a, b, c, D, x1, x2;

    cout << "---- Mencari akar-akar persamaan ----" << endl;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    cout << endl;
    cout << "Persamaan: " << a << "x^2 + " << b << "x + " << c  << " = 0" << endl;

    D = b * b - (4 * a * c);

    cout << "Diskriminan = " << D << ", sehingga" << endl;

    if (D > 0) {
        x1 = (-b + sqrt(D)) / 2 * a;
        x2 = (-b - sqrt(D)) / 2 * a;
        cout << "Akar-akar bersifat riil dan beda" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (D == 0) {
        x1 = x2 = - b / 2 * a;
        cout << "Akar-akar bersifat riil dan sama" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (D < 0) {
        x1 = -b / 2 * a + (sqrt(-D) / 2 * a);
        x2 = -b / 2 * a - (sqrt(-D) / 2 * a);
        cout << "Akar-akar bersifat imaginer" << endl;
        cout << "x1 = " << x1 << "i" << endl;
        cout << "x2 = " << x2 << "i" << endl;
    }
    else {
        cout << "Persamaan tidak valid" << endl;
    }
    
    cout << endl;

    return 0;
}