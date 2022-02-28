#include <iostream>

using namespace std;

int main() {
    int bulan;

    cout << "---- Menentukan jumlah hari dalam suatu bulan ----" << endl;
    cout << "Masukkan bulan dalam angka (1-12): ";

    cin >> bulan;

    switch(bulan) {
        case 1 :
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10:
        case 12:
            cout << "Bulan " << bulan << ": 31 hari" << endl; break;
        case 2 : 
            cout << "Bulan " << bulan << ": 28/29 hari" << endl; break;
        
        case 4 : 
        case 6 : 
        case 9 : 
        case 11: 
            cout << "Bulan " << bulan << ": 30 hari" << endl; break;
        default:
            cout << "Bulan " << bulan << ": tidak ditemukan" << endl; break;
    }
    
    cout << endl;

    return 0;
}