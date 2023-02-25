#include<iostream>

using namespace std;

int main(){
// deklarasi variable
float keliling, sisi;

cout << "===== Program Segitiga ======\n";
cout << "Silahkan masukkan sisi: ";
cin >> sisi;

keliling = 3 * sisi;
cout << "Hasil keliling segitiga: " << keliling;
return 0;
}