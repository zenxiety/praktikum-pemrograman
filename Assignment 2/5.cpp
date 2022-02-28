#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long n; // tipe data "long long" agar output benar

    cout << "Mencari nilai suku ke-n dari pola bilangan" << endl;
    cout << "Suku ke-";
    cin >> n;

    n = (n * (n + 1)) / 2;

    cout << n << endl;

    cout << endl;

    return 0;
}