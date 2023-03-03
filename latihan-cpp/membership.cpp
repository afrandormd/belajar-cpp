#include <iostream>

using namespace std;

int main(){  
    int total = 0;
    int hargaBaju = 50000;
    int diskon, jumlahBarang;
    bool isMember = false;

    cout << "===== Program Membership Pembelian Baju toko Sharein's Boutiqeu =====\n";
    cout << "Jumlah baju yang dibeli? ";
    cin >> jumlahBarang;
    cout << "Apakah member? ";
    cin >> isMember;

    if (isMember == true){
        diskon = jumlahBarang * hargaBaju * 0.1;
        total = (jumlahBarang * hargaBaju) - diskon;
    } else {
        // ketika pembelian > 10 walaupun bukan member akan dapat diskon
        if (jumlahBarang >= 3){
            diskon = jumlahBarang * hargaBaju * 0.05;
            total = (jumlahBarang * hargaBaju);
        } else {
            total = jumlahBarang * hargaBaju;
        }
    }
    // tampilkan output
    cout << "Diskon yang didapat: Rp." << diskon;
    cout << "\nTotal yang harus dibayar: Rp." << total;
}