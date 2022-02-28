#include <iostream>
using namespace std;

int main() {
    // deklarasi variabel
    int n;

    // input jumlah mahasiswa
    cout << "Masukkan jumlah mahasiswa (maksimal 50): "; cin >> n;

    // jika input jumlah mahasiswa negatif atau lebih dari 50
    if(n > 50 || n < 0)
        cout << "Jumlah mahasiswa melebihi batas" << endl;
    else {
        // deklarasi struct
        struct student {
            float student_id;
            float midterm_score;
            float finalexam_score;
            float mean;
        };

        // deklarasi array struct
        student mahasiswa[n];

        // input data mahasiswa
        for(int i = 0; i < n; i++) {
            cout << "Masukkan ID mahasiswa: "; cin >> mahasiswa[i].student_id;
            cout << "Masukkan Nilai Ujian Tengah Semester: "; cin >> mahasiswa[i].midterm_score;
            cout << "Masukkan Nilai Ujian Akhir: "; cin >> mahasiswa[i].finalexam_score;
            // hitung rata-rata nilai per mahasiswa
            mahasiswa[i].mean = (mahasiswa[i].midterm_score + mahasiswa[i].finalexam_score) / 2;
            cout << endl;
        }

        cout << endl;

        // print data mahasiswa
        for(int i= 0; i < n; i++){
            cout << "ID Mahasiswa: " << mahasiswa[i].student_id << endl;
            cout << "Rata-Rata: " << mahasiswa[i].mean << endl;
            cout << endl;
        }
    }
    
    return 0;
}