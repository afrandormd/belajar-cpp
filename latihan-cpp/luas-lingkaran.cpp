#include<iostream>
using namespace std;
#define phi 3.14

int main() {
    // rumus luas lingkaran = phi * (r * r)
    float r, luas;

    cout << "==== program luas lingkaran ====\n";
    cout << "Masukkan jari - jari: ";
    cin >> r;
    luas = phi * (r * r);
    cout << "Luas Lingkarannya adalah: " << luas;
    return 0;
}