#include <bits/stdc++.h>
// salah satu fungsi standard template library (STL) yang disediakan library bits/stdc++.h digunakan pada program ini, yaitu fungsi sort() untuk mengurutkan data array
// fungsi chrono juga digunakan pada program ini untuk menghitung running time
using namespace std;

// definisi fungsi main
int main() {
    // deklarasi variabel
    int n, temp, i;
    float med = 0;

    // input jumlah nilai (N)
    cout << "Insert number of random data: "; cin >> n;

    // deklarasi array
    float arr[n];

    //-----------------------------------------------------------------------------//

    // membuat bilangan acak sebanyak n bilangan menggunakan fungsi rand() yang akan mengambil sebarang angka secara acak dan belum terurut
    for (int i = 0; i < n; i++)
        // (% n + 1) digunakan agar nilai yang diperoleh berkisar antara 1 sampai n
        arr[i] = rand() % n + 1;

    // fungsi dari library chrono untuk mengawali perhitungan waktu
    auto start = chrono::high_resolution_clock::now();

    // mengurutkan data dengan metode ascending insertion sort
    for(int j = 1; j < n; j++) {
        i = j - 1;
        temp = arr[j];
        while(arr[i] > temp && i >= 0) {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = temp;
    }

    // mencari median berdasarkan beberapa kondisi
    if(n == 1) med = arr[0];    // nilai hanya 1
    else if (n % 2 == 0) med = (arr[(n / 2) - 1] + arr[n / 2]) / 2;     // jumlah nilai genap
    else med = arr[n / 2];      // jumlah nilai ganjil
    
    // akhir perhitungan waktu
    auto finish = chrono::high_resolution_clock::now();
    // menghitung waktu yang dibutuhkan dengan waktu akhir dikurangi waktu awal
    chrono::duration<long double> elapsed = finish - start;

    // print hasil perhitungan
    cout << "Insertion Sort\t-> " << elapsed.count() << " s\t(Median: " << med << ")\n";

    //-----------------------------------------------------------------------------//

    // memasukkan bilangan acak baru ke array
    for (int i = 0; i < n; i++) 
        arr[i] = rand() % n + 1;

    // awal perhitungan waktu baru
    start = chrono::high_resolution_clock::now();

    // mengurutkan data dengan fungsi
    sort(arr, arr+n);

    // mencari median berdasarkan beberapa kondisi
    if(n == 1) med = arr[0];    // nilai hanya 1
    else if (n % 2 == 0) med = (arr[(n / 2) - 1] + arr[n / 2]) / 2;     // jumlah nilai genap
    else med = arr[n / 2];      // jumlah nilai ganjil

    // akhir perhitungan waktu 
    finish = chrono::high_resolution_clock::now();
    // hitung waktu yang dibutuhkan
    elapsed = finish - start;

    // print hasil perhitungan
    cout << "STL Sort\t-> " << elapsed.count() << " s\t(Median: " << med << ")\n";

    return 0;
}