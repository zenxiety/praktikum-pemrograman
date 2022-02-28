#include <iostream>
using namespace std;

// definisi fungsi main
int main() {
    // deklarasi variabel
    int n, temp, min;
    float med = 0;

    // input jumlah nilai (N)
    cout << "Jumlah nilai: "; cin >> n;

    // deklarasi array
    float arr[n];

    // input nilai
    cout << "Nilai: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // mengurutkan data dengan metode selection sort
    for (int i = 0; i < n; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    
    // print data yang sudah diurutkan
    cout << "Data Terurut: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    // mencari median berdasarkan beberapa kondisi
    if(n == 1) med = arr[0];    // nilai hanya 1
    else if (n % 2 == 0) med = (arr[(n / 2) - 1] + arr[n / 2]) / 2;     // jumlah nilai genap
    else med = arr[n / 2];      // jumlah nilai ganjil

    // print median
    cout << "\nMedian: " << med;

    return 0;
}