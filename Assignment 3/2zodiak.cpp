#include <iostream>

using namespace std;

int main() {
    int tanggal, bulan;

    cout << "---- Menentukan zodiak berdasarkan tanggal lahir ----" << endl;
    cout << "Masukkan tanggal lahir dalam angka (tanggal bulan): ";

    cin >> tanggal >> bulan;

    cout << "Tanggal: " << tanggal << endl;
    cout << "Bulan: " << bulan << endl;
    cout << "Zodiak: ";

    // // Aries	21 Maret s/d 19 April    
    if ((bulan == 3 && tanggal >= 21 && tanggal <= 31)  || 
        (bulan == 4 && tanggal >= 1  && tanggal <= 19)) {
                cout << "Aries" << endl;
    }

    // Taurus	20 April s/d 20 Mei
    else if ((bulan == 4 && tanggal >= 20 && tanggal <= 30)  || 
             (bulan == 5 && tanggal >= 1  && tanggal <= 20)) {
                cout << "Taurus" << endl;
    }

    // Gemini	21 Mei s/d 20 Juni 
    else if ((bulan == 5 && tanggal >= 21 && tanggal <= 31)  || 
             (bulan == 6 && tanggal >= 1  && tanggal <= 20)) {
                cout << "Gemini" << endl;
    }

    // Cancer	21 Juni s/d 22 Juli
    else if ((bulan == 6 && tanggal >= 21 && tanggal <= 30)  || 
             (bulan == 7 && tanggal >= 1  && tanggal <= 22)) {
                cout << "Cancer" << endl;
    }

    // Leo	23 Juli s/d 22 Agustus
    else if ((bulan == 7 && tanggal >= 23 && tanggal <= 31)   || 
             (bulan == 8 && tanggal >= 1  && tanggal <= 22)) {
                cout << "Leo" << endl;
    }

    // Virgo	23 Agustus s/d 22 September
    else if ((bulan == 8 && tanggal >= 23 && tanggal <= 31)  || 
             (bulan == 9 && tanggal >= 1  && tanggal <= 22)) {
                cout << "Virgo" << endl;
    }

    // Libra	23 September s/d 22 Oktober
    else if ((bulan == 9  && tanggal >= 23 && tanggal <= 30)  || 
             (bulan == 10 && tanggal >= 1  && tanggal <= 22)) {
                cout << "Libra" << endl;
    }

    // Scorpio	23 Oktober s/d 21 November
    else if ((bulan == 10 && tanggal >= 23 && tanggal <= 31)  || 
             (bulan == 11 && tanggal >= 1  && tanggal <= 21)) {
                cout << "Scorpio" << endl;
    }

    // Sagitarius	22 November s/d 21 Desember
    else if ((bulan == 11 && tanggal >= 22 && tanggal <= 30)  || 
             (bulan == 12 && tanggal >= 1  && tanggal <= 21)) {
                cout << "Sagitarius" << endl;
    }

    // Capricorn	22 Desember s/d 19 Januari
    else if ((bulan == 12 && tanggal >= 22 && tanggal <= 31) || 
             (bulan == 1 && tanggal >= 1  && tanggal <= 19)) {
                cout << "Capricorn" << endl;
    }

    // Aquarius	20 Januari s/d 18 Februari
    else if ((bulan == 1 && tanggal >= 20 && tanggal <= 31)  || 
             (bulan == 2 && tanggal >= 1  && tanggal <= 18)) {
                cout << "Aquarius" << endl;
    }

    // Pisces	19 Februari s/d 20 Maret
    else if ((bulan == 2 && tanggal >= 19 && tanggal <= 29)  || 
             (bulan == 3 && tanggal >= 1  && tanggal <= 20)) {
                cout << "Pisces" << endl;
    }    
    else {
        cout << "tidak ditemukan" << endl;
    }

    cout << endl;

    return 0;
}