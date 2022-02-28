#include <iostream>
using namespace std;

// deklarasi fungsi prototype a (ackermann)
int a(int m, int n);

// definisi fungsi main
int main() {
    // deklarasi variabel
    int m, n;

    // input bilangan parameter
    cin >> m >> n;

    // pemanggilan fungsi a
    // print nilai fungsi
    cout << a(m, n);

    return 0;
}

// deklarasi fungsi prototype a (ackermann)
int a(int m, int n) {
    // batas rekursi, jika nilai m = 0, kembalikan nilai n + 1 ke fungsi (sesuai dengan aturan dari fungsi ackermann)
    if(m == 0) return n + 1;

    // batas rekursi, jika nilai n = 0, kembalikan nilai rekursi fungsi a di mana m dikurangi 1
    else if(n == 0) return a(m - 1, 1);
    
    // jika m dan n keduanya bukan 0, fungsi rekursi yang digunakan adalah sesuai dengan rumus fungsi ackermann, yaitu sebagai berikut
    else return a(m - 1, a(m, n - 1));
}