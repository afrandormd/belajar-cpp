#include<iostream>

using namespace std;
int main(){
 int nilai;
 float ip;
 char nilaiMutu;
 nilaiMutu = ' ';
 nilai = 0;

 cout << "==== Program Hasil Nilai ====\n";
 cout << "Silahkan masukkan nilai: ";
 cin >> nilai;

 // jika nilai antara 90 - 100 (nilai mutu)
 if (nilai >= 90 && nilai <= 100){
    nilaiMutu =  'A';
 } else if (nilai >= 80 && nilai <= 89){
    nilaiMutu = 'B';
 } else if (nilai >= 70 && nilai <= 79){
    nilaiMutu = 'C';
 } else if (nilai >= 60 && nilai <= 69){
    nilaiMutu = 'D';
 } else {
    if (nilai < 60){
        nilaiMutu = 'E';
    } else {
        cout << "Nilai yang anda inputkan tidak terdaftar\n";
    }
 }

 // IP (switch case)

// IP (if else)
if (nilaiMutu == 'A'){
    ip = 4;
} else if (nilaiMutu == 'B'){
    ip = 3;
} else if (nilaiMutu == 'C'){
    ip = 2;
} else if (nilaiMutu == 'D'){
    ip = 2;
} else {
    if (nilaiMutu == 'E'){
        ip = 0;
    } else {
        cout << "Nilai mutu tidak terdaftar";
        ip = 0;
    }
}

cout << "\nNilai: " << nilai;
cout << "\nNilai mutu: " << nilaiMutu;
cout << "\nIP: " << ip;
return 0;
}