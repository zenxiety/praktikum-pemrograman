#include <iostream>

using namespace std;

int main(){
    float kecepatan, jarak, waktu;

    cout << "Menghitung waktu dengan input kecepatan dan jarak" << endl;
    cout << "Masukkan kecepatan (m/s): ";
    cin >> kecepatan;
    cout << "Masukkan jarak (m): ";
    cin >> jarak;

    waktu = jarak / kecepatan;

    cout << "Waktu yang dibutuhkan adalah " << waktu << " s" << endl;
    
    cout << endl;

    return 0; 
}