#include<iostream>

using namespace std;

int main(){
    // luas persegi
    float sisi, luas, panjang, lebar;
    cout << "Masukkan sisi: ";
    cin >> sisi;
    luas = sisi * sisi;
    cout << "Luasnya persegi adalah: " << luas << "\n";

    cout << "\n=====================\n";
        // luas persegi panjang
    cout << "\nMasukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan Lebar: ";
    cin >> lebar;
    luas = panjang * lebar;
    cout << "Luasnya persegi panjang adalah: " << luas;
return 0;
}