#include <iostream>
using namespace std;

// deklarasi fungsi prototype binomial
int binomial(int n, int k);

// definisi fungsi main
int main() {
    // deklarasi variabel
    int n, k;
    
    // input variabel indeks
    cin >> n >> k;

    // pemanggilan fungsi binomial
    // print nilai indeks
    cout << binomial(n, k);

    return 0;
}

// definisi fungsi binomial
int binomial(int n, int k) {
    // batas rekursi, jika nilai n = k, n = 1, atau k = 0, kembalikan nilai 1 ke fungsi
    // karena setiap indeks dengan nilai n yang sama dengan k, n = 1 atau k = 0 pasti memiliki nilai 1
    if(n == k || n == 1 || k == 0) return 1;

    /* rekursi fungsi binomial
     - nilai dari indeks yang dimasukkan user adalah jumlah dari dua angka yang berada di indeks atasnya pada segitiga pascal
     - pola tersebut dilanjutkan terus menerus hingga mencapai batasnya, yaitu di puncak segitiga pascal seperti kondisi pada if di atas
     - sehingga rumus yang digunakan untuk mencari nilai dari indeks adalah rekursi dari fungsi binomial dengan pengurangan nilai n dan k sebagai berikut */
    else return binomial(n - 1, k - 1) + binomial(n - 1, k);
}