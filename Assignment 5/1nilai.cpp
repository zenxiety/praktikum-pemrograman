#include <iostream>

using namespace std;

int main() {
    // deklarasi variabel
    int n;
    double sum, avg;
    sum = 0;

    cout << "Menghitung Rata-Rata Nilai" << endl;
    
    // input n bilangan
    cout << "Ada berapa angka? ";
    cin >> n;
    
    // deklarasi array
    int array[n];
    cout << "Angka = ";
    for(int i = 0; i < n; i++) {
        // input nilai tiap n
        cin >> array[i];
        // jumlah akhir bilangan dari tiap input
        sum += array[i];
    }

    // hitung rata-rata
    avg = sum / n;

    // print rata-rata
    cout << "Rata-rata = " << avg;

    return 0;
}