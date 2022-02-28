// library bits/stdc++.h menyediakan fungsi-fungsi standar yang telah disediakan oleh C++ termasuk iostream dan chrono
// chrono menyediakan fungsi-fungsi yang berhubungan dengan waktu dan pada program ini digunakan untuk menghitung running time dari beberapa metode sorting
#include <bits/stdc++.h>
// using namespace std tidak digunakan karena program ini menggunakan cukup banyak standard library sehingga menyebabkan munculnya ambigu pada fungsi-fungsi yang menggunakan awalan std::

int main() {
    // deklarasi variabel
    int n, i, temp, min;

    // input jumlah bilangan acak yang ingin diurutkan 
    std::cout << "\nInsert number of random data: "; std::cin >> n;

    // jika input adalah bilangan negatif
    if(n < 0) std::cout << "Invalid number, please enter positive integers" << std::endl;

    // deklarasi array untuk menampung bilangan acak 1 sampai n
    int arr[n];
    // deklarasi array untuk menampung nilai running time dari tiap metode sorting
    double time[4];

    // membuat bilangan acak sebanyak n bilangan menggunakan fungsi rand() yang akan mengambil sebarang angka secara acak dan belum terurut
    for (int i = 0; i < n; i++) 
        arr[i] = rand();

    //-----------------------------------------------------------------------------//

    // fungsi dari library chrono untuk mengawali perhitungan waktu
    auto start = std::chrono::high_resolution_clock::now();

    // insertion sort (ascending)
    for(int j = 1; j < n; j++) {
        i = j - 1;
        temp = arr[j];
        while(arr[i] > temp && i >= 0) {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = temp;
    }

    // akhir perhitungan waktu
    auto finish = std::chrono::high_resolution_clock::now();
    // menghitung waktu yang dibutuhkan dengan waktu akhir dikurangi waktu awal
    std::chrono::duration<long double> elapsed = finish - start;

    // memasukkan nilai waktu ke array time sesuai indeks 
    time[0] = elapsed.count() / 1000;

    //-----------------------------------------------------------------------------//

    // memasukkan bilangan acak baru ke array
    for (int i = 0; i < n; i++) 
        arr[i] = rand();
    
    // awal perhitungan waktu baru
    start = std::chrono::high_resolution_clock::now();
    
    // insertion sort (descending)
    for(int j = 1; j < n; j++) {
        i = j - 1;
        temp = arr[j];
        while(arr[i] < temp && i >= 0) {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = temp;
    }

    // akhir perhitungan waktu 
    finish = std::chrono::high_resolution_clock::now();
    // hitung waktu yang dibutuhkan
    elapsed = finish - start;

    // input waktu yang dibutuhkan sesuai indeks
    time[1] = elapsed.count() / 1000;

    //-----------------------------------------------------------------------------//

    // memasukkan bilangan acak baru ke array
    for (int i = 0; i < n; i++) 
        arr[i] = rand();

    // awal perhitungan waktu baru
    start = std::chrono::high_resolution_clock::now();

    // selection sort (ascending)
    for (int i = 0; i < n; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    
    // akhir perhitungan waktu 
    finish = std::chrono::high_resolution_clock::now();
    // hitung waktu yang dibutuhkan
    elapsed = finish - start;

    // input waktu yang dibutuhkan sesuai indeks
    time[2] = elapsed.count() / 1000;
    
    //-----------------------------------------------------------------------------//

    // memasukkan bilangan acak baru ke array
    for (int i = 0; i < n; i++) 
        arr[i] = rand();

    // awal perhitungan waktu baru
    start = std::chrono::high_resolution_clock::now();

    // selection sort (descending)
    for (int i = 0; i < n; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            if(arr[j] > arr[min]) {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    
    // akhir perhitungan waktu 
    finish = std::chrono::high_resolution_clock::now();
    // hitung waktu yang dibutuhkan
    elapsed = finish - start;

    // input waktu yang dibutuhkan sesuai indeks
    time[3] = elapsed.count() / 1000;
    
    //-----------------------------------------------------------------------------//

    // array of string untuk menampung nama jenis sorting yang akan di-print ke tabel
    std::string sort[4] = {"Insertion Sort (Ascending)",
                    "Insertion Sort (Descending)",
                    "Selection Sort (Ascending)",
                    "Selection Sort (Descending)"};

    // print tabel
    std::cout << "\nNo\tSorting Method\t\t\tRunning Time\n";
    for (int i = 0; i <= 3; i++)
        std::cout << i + 1 << ")  "<< sort[i] << "\t\t" << time[i] << " s" << std::endl;
    
    // print spasi
    std::cout << std::endl;

    return 0;
}