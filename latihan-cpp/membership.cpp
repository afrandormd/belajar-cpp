#include <iostream>

using namespace std;

int main(){  
    int total = 0;
    int diskon, jumlahBarang, hargaBaju;
    bool isMember = false;

    cout << "===== Program Membership Pembelian Baju toko Sharein's Boutiqeu =====\n";
    cout << "Masukkan harga /baju: ";
    cin >> hargaBaju;
    cout << "Jumlah baju yang dibeli? ";
    cin >> jumlahBarang;
    cout << "Apakah member? ";
    cin >> isMember;

    if (isMember == true){
        diskon = jumlahBarang * hargaBaju * 0.1;
        total = (jumlahBarang * hargaBaju) - diskon;
    } else {
        // ketika pembelian > 10 walaupun bukan member akan dapat diskon
        if (jumlahBarang >= 10){
            diskon = jumlahBarang * hargaBaju * 0.05;
            total = (jumlahBarang * hargaBaju) - diskon;
        } else {
            total = jumlahBarang * hargaBaju;
        }
    }
    // tampilkan output
    cout << "Total yang harus dibayar: " << total;
}