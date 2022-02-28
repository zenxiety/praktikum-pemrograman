#include <iostream>
using namespace std;

int main() {
    // deklarasi struct
    struct zodiak {
        string nama;
        int tanggal1;
        int tanggal2;
        int bulan1;
        int bulan2;
    };

    // deklarasi variabel
    int tanggal, bulan;

    // input tanggal dan bulan kelahiran
    cout << "Masukkan tanggal: ";      cin >> tanggal;
    cout << "Masukkan bulan (1-12): "; cin >> bulan;

    cout << endl;

    // deklarasi struct per zodiak
    zodiak Aries        {"Aries", 21, 19, 3, 4};
    zodiak Taurus       {"Taurus", 20, 20, 4, 5};
    zodiak Gemini       {"Gemini", 21, 20, 5, 6};
    zodiak Cancer       {"Cancer", 21, 22, 6, 7};
    zodiak Leo          {"Leo", 23, 22, 7, 8};
    zodiak Virgo        {"Virgo", 23, 22, 8, 9};
    zodiak Libra        {"Libra", 23, 22, 9, 10};
    zodiak Scorpio      {"Scorpio", 23, 21, 10, 11};
    zodiak Sagitarius   {"Sagitarius", 22, 21, 11, 12};
    zodiak Capricorn    {"Capricorn", 22, 21, 12, 1};
    zodiak Aquarius     {"Aquarius", 20, 18, 1, 2};
    zodiak Pisces       {"Pisces", 19, 20, 2, 3};
    
    // print tanggal dari input
    cout << "Tanggal: " << tanggal << endl;

    // print nama bulan dari input 
    switch(bulan){
        case 1  : cout << "Bulan: Januari"          << endl; break; 
        case 2  : cout << "Bulan: Februari"         << endl; break; 
        case 3  : cout << "Bulan: Maret"            << endl; break; 
        case 4  : cout << "Bulan: April"            << endl; break; 
        case 5  : cout << "Bulan: Mei"              << endl; break; 
        case 6  : cout << "Bulan: Juni"             << endl; break; 
        case 7  : cout << "Bulan: Juli"             << endl; break; 
        case 8  : cout << "Bulan: Agustus"          << endl; break; 
        case 9  : cout << "Bulan: September"        << endl; break; 
        case 10 : cout << "Bulan: Oktober"          << endl; break; 
        case 11 : cout << "Bulan: November"         << endl; break; 
        case 12 : cout << "Bulan: Desember"         << endl; break; 
        default : cout << "Bulan tidak ditemukan"   << endl; break;
    }

    // mencari zodiak sesuai tanggal dan bulan yang diinputkan
    if(bulan == Aries.bulan1 && tanggal >= Aries.tanggal1 && tanggal <= 31 
        || bulan == Aries.bulan2 && tanggal >= 1 && tanggal <= Aries.tanggal2)
        cout << "Zodiak: " << Aries.nama;

    else if(bulan == Taurus.bulan1 && tanggal >= Taurus.tanggal1 && tanggal <= 30 
        || bulan == Taurus.bulan2 && tanggal >= 1 && tanggal <= Taurus.tanggal2)
        cout << "Zodiak: " << Taurus.nama;

    else if(bulan == Gemini.bulan1 && tanggal >= Gemini.tanggal1 && tanggal <= 31 
        || bulan == Gemini.bulan2 && tanggal >= 1 && tanggal <= Gemini.tanggal2)
        cout << "Zodiak: " << Gemini.nama;

    else if(bulan == Cancer.bulan1 && tanggal >= Cancer.tanggal1 && tanggal <= 30 
        || bulan == Cancer.bulan2 && tanggal >= 1 && tanggal <= Cancer.tanggal2)
        cout << "Zodiak: " << Cancer.nama;

    else if(bulan == Leo.bulan1 && tanggal >= Leo.tanggal1 && tanggal <= 31 
        || bulan == Leo.bulan2 && tanggal >= 1 && tanggal <= Leo.tanggal2)
        cout << "Zodiak: " << Leo.nama;

    else if(bulan == Virgo.bulan1 && tanggal >= Virgo.tanggal1 && tanggal <= 31 
        || bulan == Virgo.bulan2 && tanggal >= 1 && tanggal <= Virgo.tanggal2)
        cout << "Zodiak: " << Virgo.nama;

    else if(bulan == Libra.bulan1 && tanggal >= Libra.tanggal1 && tanggal <= 30 
        || bulan == Libra.bulan2 && tanggal >= 1 && tanggal <= Libra.tanggal2) 
        cout << "Zodiak: " << Libra.nama;

    else if(bulan == Scorpio.bulan1 && tanggal >= Scorpio.tanggal1 && tanggal <= 31 
        || bulan == Scorpio.bulan2 && tanggal >= 1 && tanggal <= Scorpio.tanggal2)
        cout << "Zodiak: " << Scorpio.nama;

    else if(bulan == Sagitarius.bulan1 && tanggal >= Sagitarius.tanggal1 && tanggal <= 30 
        || bulan == Sagitarius.bulan2 && tanggal >= 1 && tanggal <= Sagitarius.tanggal2)
        cout << "Zodiak: " << Sagitarius.nama;

    else if(bulan == Capricorn.bulan1 && tanggal >= Capricorn.tanggal1 && tanggal <= 31 
        || bulan == Capricorn.bulan2 && tanggal >= 1 && tanggal <= Capricorn.tanggal2)
        cout << "Zodiak: " << Capricorn.nama;

    else if(bulan == Aquarius.bulan1 && tanggal >= Aquarius.tanggal1 && tanggal <= 31 
        || bulan == Aquarius.bulan2 && tanggal >= 1 && tanggal <= Aquarius.tanggal2)
        cout << "Zodiak: " << Aquarius.nama;
        
    else if(bulan == Pisces.bulan1 && tanggal >= Pisces.tanggal1 && tanggal <= 29 
        || bulan == Pisces.bulan2 && tanggal >= 1 && tanggal <= Pisces.tanggal2)
        cout << "Zodiak: " << Pisces.nama;
        
    else
        cout << "Tanggal tidak ditemukan";


    cout << endl;

    return 0;
}