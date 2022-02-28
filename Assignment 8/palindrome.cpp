#include <iostream>
using namespace std;

// deklarasi fungsi prototype palindrome
string palindrome(string a);

// definisi fungsi main
int main() {
    // deklarasi variabel
    string s;

    // input string
    cin >> s;
 
    // pemanggilan fungsi palindrome
    // print jenis string (palindrome/bukan)
    cout << palindrome(s);

    return 0;
}

// definisi fungsi palindrome
string palindrome(string s) {
    // jika string hanya terdiri dari 1 karakter, maka string tersebut termasuk palindrom
    if(s.length() <= 1) return "Palindrom";

    // jika string terdiri dari 2 karakter atau lebih
    else {
        // jika huruf pertama dari string sama dengan huruf terakhir dari string
        // kembalikan nilai string baru namun dimulai dari huruf kedua dari awal string dan diakhiri pada huruf kedua dari akhir string  
        if(s[0] == s[s.length() - 1]) return palindrome(s.substr(1, s.length() - 2));
        
        // jika huruf pertama dan huruf terakhir tidak sama, maka string otomatis bukan palindrom
        else return "Bukan Palindrom";
    }
}