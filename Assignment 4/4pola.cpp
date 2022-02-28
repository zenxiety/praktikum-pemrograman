#include<iostream>

using namespace std;

int main() {
    // deklarasi variabel
    int n, s, r;

    // input n bilangan dan perulangan tiap s bilangan
    cin >> n >> s;

    // simpan nilai perulangan
    r = s;

    // loop barisan
    for(int i = 1; i <= n; i++) {
        // ubah pola angka menjadi (*)
        if(i == s) {
            cout << "* ";
            s += r;
        }
        // barisan selain pola
        else cout << i << " ";
    }

    return 0;  
}