#include<iostream>

using namespace std;

int main() {
    // deklarasi variabel
    int row;

    // input jumlah baris
    cout << "Enter number of rows: "; cin >> row;

    // loop pola 
    for(int i = row; i >= 1; i--) {
        // loop spasi sebelum piramida
        for(int j = i; j > 0; j--) {
            cout << " ";
        }

        // loop sisi kiri piramida
        for(int k = row + 1; k > i; --k) {
            cout << "*";
        }

        // loop sisi kanan piramida
        for(int k = row; k > i; --k) {
            cout << "*";
        }

        // baris baru per tingkat piramida
        cout << endl;
    }

    return 0;
}