#include <iostream>

using namespace std;

int main() {
    // deklarasi array matriks
    int array1[2][2];
    int array2[2][2];
    int arrayX[2][2];

    // input anggota matriks 1
    cout << "Masukkan elemen matriks 1: " << endl;
    for(int i = 0; i <= 1; i++){
        for(int j = 0; j <= 1; j++){
            cout << "Masukkan elemen a" << i + 1 << j + 1 << ": ";
            cin >> array1[i][j];
        }
    }

    cout << endl;

    // input anggota matriks 2
    cout << "Masukkan elemen matriks 2: " << endl;
    for(int k = 0; k <= 1; k++){
        for(int l = 0; l <= 1; l++){
            cout << "Masukkan elemen b" << k + 1 << l + 1 << ": ";
            cin >> array2[k][l];
        }
    }

    cout << endl;

    // print matriks 1
    cout << "Matriks 1: " << endl;
    for(int i = 0; i <= 1; i++){
        for(int j = 0; j <= 1; j++){
            cout <<  array1[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    // print matriks 2
    cout << "Matriks 2: " << endl;
    for(int k = 0; k <= 1; k++){
        for(int l = 0; l <= 1; l++){
            cout <<  array2[k][l] << " ";
        }
        cout << endl;
    }

    // rumus perkalian dua matriks
    for(int m = 0; m <= 1; m++){
        for(int n = 0; n <= 1; n++){
            arrayX[m][n] = array1[m][0] * array2[0][n] + array1[m][1] * array2[1][n];
        }
    }

    cout << endl;

    // print hasil perkalian dua matriks 
    cout << "Output Matriks: " << endl;
    for(int m = 0; m <= 1; m++){
        for(int n = 0; n <= 1; n++){
            cout <<  arrayX[m][n] << " ";
        }
        cout << endl;
    }

    return 0;
}