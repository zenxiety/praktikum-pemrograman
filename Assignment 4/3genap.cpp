#include<iostream>

using namespace std;

int main() {
    // deklarasi variabel
    int bil;

    // input bilangan
    cin >> bil;
    
    // output bilangan ganjil
    if(bil % 2 != 0) {
        bil -= 1;
        for(int i = bil; i > 0; i--) {
            // print nilai bilangan genap sebelumnya
            cout << bil << " ";
            bil -= 2;
            // break saat sampai 0 
            if(bil < 0) {
                break;
            }
        }
    } 

    // output bilangan genap
    else {
        for(int i = bil; i > 0; i--) {
            // print nilai bilangan genap sebelumnya
            cout << bil << " ";
            bil -= 2;
            // break saat sampai 0 
            if(bil < 0) {
                break;
            }
        }
    }

    return 0;  
}