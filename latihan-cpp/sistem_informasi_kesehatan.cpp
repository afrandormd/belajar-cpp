#include<iostream>

using namespace std;

int main() {
    //Deklarasi Variabel
    float tinggiBadan, beratBadan;
    int umur;
    string nama;
    char golDarah;
    bool kesehatan;


    cout << "====== Sistem Informasi Kesehatan ======" << endl;
    cout << "Silahkan masukkan data diri anda" << endl;
    cout << "Masukkan nama anda: ";
    cin >> nama;
    cout << "Tinggi Badan: ";
    cin >> tinggiBadan;
    cout << "Berat Badan: ";
    cin >> beratBadan;
    cout << "Umur: ";
    cin >> umur;
    cout << "Gol Darah: ";
    cin >> golDarah;
    cout << "Sehat / Tidak";
    cin >> kesehatan;

    // tampilkan
    cout << nama << endl;
    cout << tinggiBadan << endl;
    cout << beratBadan << endl;
    cout << umur << endl;
    cout << golDarah << endl;
    cout << kesehatan << endl;
    return 0;
}