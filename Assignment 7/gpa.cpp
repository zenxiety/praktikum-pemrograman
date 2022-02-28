#include <iostream>
using namespace std;

// deklarasi fungsi untuk mencari gpa
int calculate_gpa(char score[], int sks[], int n) {
    // deklarasi variabel
    float gpa;
    float value = 0, sksSum = 0;

    // deklarasi array nilai (dalam angka)
    int nilai[n];

    for(int i = 0; i < n; i++) {
        // input tiap perolehan nilai mahasiswa dalam huruf
        cout << "Masukkan nilai ke-" << i << " (A-E): ";
        cin >> score[i];

        // konversi nilai dalam bentuk huruf ke bentuk angka
        if(score[i] == 'A') nilai[i] = 4;
        else if(score[i] == 'B') nilai[i] = 3;
        else if(score[i] == 'C') nilai[i] = 2;
        else if(score[i] == 'D') nilai[i] = 1;
        else if(score[i] == 'E') nilai[i] = 0;
        else cout << "Nilai tidak valid" << endl;

        // input jumlah sks dari tiap nilai yang diperoleh
        cout << "SKS: ";
        cin >> sks[i];

        // menghitung jumlah keseluruhan sks yang diambil mahasiswa  
        sksSum += sks[i];

        // menghitung jumlah nilai mahasiswa dalam setiap mata kuliah sesuai dengan jumlah sks
        value += (nilai[i] * sks[i]);
    }
    
    cout << endl;

    // menghitung gpa
    gpa = value / sksSum;
    // print gpa
    cout << "GPA: " << gpa << endl;

    return 0;
}

int main() {
    // deklarasi variabel
    int n;

    // input jumlah nilai
    cout << "Masukkan Jumlah Nilai Mahasiswa: ";
    cin >> n;

    // deklarasi array nilai (dalam huruf)
    char score[n];
    // deklarasi array sks tiap nilai
    int sks[n];

    // pemanggilan fungsi untuk mencari gpa
    calculate_gpa(score, sks, n);

    return 0;
}