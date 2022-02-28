#include <iostream>

using namespace std;

int main() {
    // deklarasi variabel
    int n;

    cout << "Mencari Bilangan yang Sama Dari Dua Himpunan" << endl;

    // input n bilangan
    cout << "Ada berapa angka? "; cin >> n;
    
    // deklarasi array
    int A[n];
    int B[n];

    // input bilangan anggota himpunan A dan B
    cout << "Himpunan A = ";
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }
    cout << "Himpunan B = ";
    for(int i = 0; i < n; i++) {
        cin >> B[i];
    }

    // print anggota himpunan A
    cout << "A = [ ";
    for(int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << "]" << endl;

    // print anggota himpunan B
    cout << "B = [ ";
    for(int i = 0; i < n; i++) {
        cout << B[i] << " ";
    }
    cout << "]" << endl;

    // cari interseksi 
    cout << "Interseksi: ";
    for(int x = 0; x <= n; x++) {
        for(int y = 0; y < n; y++) {
            if (A[x] == B[y]){
                // print interseksi
                cout << A[x] << " ";
                // hapus duplikat
                if (A[x] == B[y]) {
                    break;
                }
            }
        }
    }

    return 0;
}