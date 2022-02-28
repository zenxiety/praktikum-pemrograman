#include <iostream>

using namespace std;

int main() {
    int bil;

    cout << "---- Menentukan jenis bilangan ----" << endl;
    cout << "Masukkan angka: ";

    cin >> bil;
    
    int n = (int) bil;

    if (bil == n) {
        cout << "Bilangan bulat" << endl;
    }
    else if (bil != n){
        cout << "Bukan bilangan bulat" << endl;
    }
    else {
        cout << "Bilangan tidak dapat dikenali" << endl;
    }

    cout << endl;

    return 0;
}