#include<iostream>

using namespace std;

int main(){
// deklarasi variable
float keliling, sisi, sisi1, sisi2, sisi3, keliling2, alas, tinggi, luas;
int pilihan;

cout << "===== Program Segitiga ======\n";
cout << "Menu yang tersedia: \n";
cout << "[1] keliling segitiga\n[2] keliling segitiga siku - siku\n[3] luas segitiga";
cout << "Silahkan masukkan pilihan: ";
cin >> pilihan;

if (pilihan == 1){
    cout << "=== Program menghitung keliling segitiga ===\n";
    cout << "Silahkan masukkan sisi: ";
    cin >> sisi;
    keliling = 3 * sisi;
    cout << "Hasil keliling segitiga: " << keliling;
} else if (pilihan == 2){
    cout << "=== Program menghitung keliling segitiga siku-siku ===\n";
    cout << "Silahkan masukkan sisi pertama: ";
    cin >> sisi1;
    cout << "Silahkan masukkan sisi kedua: ";
    cin >> sisi2;
    cout << "Silahkan masukkan sisi ketiga: ";
    cin >> sisi3;
    keliling2 = sisi1 + sisi2 + sisi3;
    cout << "Hasil keliling segitiga: " << keliling2;
} else if(pilihan == 3){
    cout << "=== Program hitung luas segitiga ===\n";
    cout << "Silahkan masukkan alas: ";
    cin >> alas;
    cout << "Silahkan masukkan tinggi: ";
    cin >> tinggi;
    luas = alas * tinggi;
    cout << "Luas segitiga adalah: " << luas;
}
return 0;
}