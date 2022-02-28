#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int jam1, menit1, jam2, menit2, selisih;
    
    cout << "Menghitung selisih dua buah jam" << endl;
    cout << "Masukkan data Jam 1: ";
    cin >> jam1;
    cout << "Masukkan data Menit 1: ";
    cin >> menit1;
    cout << "Masukkan data Jam 2: ";
    cin >> jam2;
    cout << "Masukkan data Menit 2: ";
    cin >> menit2;

    jam1 *= 60;
    jam2 *= 60;

    selisih = jam1 + menit1 - jam2 - menit2;
    cout << "Selisih kedua jam tersebut " << abs(selisih) << " menit" << endl;

    cout << endl;
    
    return 0;
}