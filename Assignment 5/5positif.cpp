#include <iostream>

using namespace std;

int main() {
    // deklarasi variabel
    int n;
    int x = 1;
    int m = 0;

    // input jumlah anggota himpunan
    cout << "Ada berapa angka? "; cin >> n;

    // deklarasi array himpunan
    int array[n];

    // input anggota himpunan
    cout << "Masukkan angka: ";
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }

    // mencari bilangan positif terkecil yang tidak ada di himpunan
    for(int i = 0; i < n; i++){
        for(int j = n; j > 0; j--){
            while(x == array[i] || x == array[j]) { 
                x++;
            }
        }
    }

    // jika semua input bilangan negatif
    for(int i = 0; i < n; i++){
        if(array[i] < 0) {
            m++;
            if(m == n) {
                x = 1;
            }
        }
    }

    // print bilangan positif terkecil
    cout << x;

    return 0;
}