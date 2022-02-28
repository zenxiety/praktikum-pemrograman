#include<iostream>

using namespace std;

int main() {
    // deklarasi variabel
    int grid;

    //input jumlah baris dan kolom
    cout << "Insert the maximum number to calculate the multiplication table: "; cin >> grid;

    cout << "    ";

    // loop baris pertama    
    for(int i = 0; i <= grid; i++) {
        cout << i;
        cout << "    ";
    }  

    cout << endl;

    // loop tabel
    for(int i = 0; i <= grid; i++) {
        // loop kolom pertama
        cout << i << " - ";
            // loop isi tabel perkalian
            for(int j = 0; j <= grid; j++) {
                cout << j * i << "    ";
            }
        // baris baru
        cout << endl;
    }  
    return 0;  
}