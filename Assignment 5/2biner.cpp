#include <iostream>

using namespace std;

int main() {
    // deklarasi variabel
    int num, x;
    int array[8];

    cout << "Konversi Bilangan Cacah Ke Bilangan Biner" << endl;

    // input bilangan
    cout << "Masukkan angka : "; 
    cin >> num;

    // jika input bilangan negatif
    if(num > 255 || num < 0) {
        cout << "Invalid number" << endl;
    }

    else {
        // loop biner
        for(int i = 0; num > 0; i++) {
            if(num % 2 == 1) {
                array[i] = 1;
            }
            else if(num % 2 == 0) {
                array[i] = 0;
            }
            num /= 2;

            // panjang array
            x = i;
        }

        // print biner
        cout << "Biner : ";
        // loop print biner dari bilangan terakhir
        for(int i = x; i >= 0; i--) {
            cout << array[i] << " ";
        }
    }

    return 0;
}