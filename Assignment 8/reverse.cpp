#include <iostream>
using namespace std;

// deklarasi fungsi prototype reverse
string reverse(string n);

// definisi fungsi main
int main() {
    // deklarasi variabel
    string n;

    // input bilangan yang akan ditukar
    cin >> n;

    // pemanggilan fungsi reverse
    // print hasil penukaran bilangan
    cout << reverse(n);

    return 0;
}

// definisi fungsi reverse
string reverse(string n) {
    // batas rekursi, jika panjang string kurang dari / sama dengan 1, kembalikan nilai string tersebut ke fungsi
    if(n.length() <= 1) return n;
    
    // jika panjang string lebih dari 1, kembalikan nilai karakter terakhir dari string input ditambah dengan rekursi fungsi reverse dari nilai string pada index pertama hingga index terakhir dikurangi satu
    // perulangan akan terus dijalankan hingga panjang string = 1 
    // substr(x, y) adalah fungsi untuk mengambil sebagian elemen dari sebuah string, dimulai dari index ke-x sampai index ke-y
    else return n.substr(n.length() - 1) + reverse(n.substr(0, n.length() - 1));
}