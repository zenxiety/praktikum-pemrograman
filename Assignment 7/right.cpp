#include <iostream>
using namespace std;

// deklarasi fungsi untuk print n karakter terakhir
string string_from_right(string, int);

int main() {
    // deklarasi variabel
    string st;
    int n;
    
    // input string
    cin >> st;
    // input jumlah karakter yang akan diambil
    cin >> n;
    
    // pemanggilan fungsi untuk print n karakter terakhir
    string_from_right(st, n);


    return 0;
}

// definisi fungsi untuk print n karakter terakhir
string string_from_right(string st, int n) {
    // deklarasi variabel untuk mencari indeks pertama yang akan di-print
    // panjang string input dikurangi n karakter yang akan di-print
    int digit = st.length() - n;
    // print n karakter terakhir dari string input
    for(int i = digit; i < st.length(); i++) {
        cout << st[i];
    }
}
