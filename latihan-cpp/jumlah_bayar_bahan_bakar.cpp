#include<iostream>

using namespace std;

int main(){
    // deklarasi variable
    float jliter, Tbayar;
    int jbayar;
    string pilihan;


    cout << "===== Program Pembelian Bahan Bakar ======\n";
    // tampilkan list pilihan
    cout << "menu pilihan yang tersedia: \n";
    cout << "p1\np2\np3\npr\npl\n";
    cout << "Silahkan masukkan pilihan anda: ";
    cin >> pilihan;


    if (pilihan == "p1"){
        jbayar = 10000;
        jliter = jbayar / 10000;
        cout << "Total harga: " << jbayar << "\nBahan bakar yang didapat: " << jliter << " liter";
    } else if (pilihan == "p2"){
        jbayar = 20000;
        jliter = jbayar / 10000;
        cout << "Total harga: " << jbayar << "\nBahan bakar yang didapat: " << jliter << " liter";
    } else if (pilihan == "p3"){
        jbayar = 30000;
        jliter = jbayar / 10000;
        cout << "Total harga: " << jbayar << "\nBahan bakar yang didapat: " << jliter << " liter";
    } else if (pilihan == "pr"){
        cout << "Masukkan nominal bayar: ";
        cin >> Tbayar;
        jliter = Tbayar / 10000;
        cout << "Harga yang anda masukkan: Rp. " << Tbayar << "\nBahan bakar yang didapat: " << jliter << " Liter";
    } else if (pilihan == "pl"){
        cout << "Masukkan jumlah bahan bakar(ltr): ";
        cin >> jliter;
        jbayar = jliter * 10000;
        cout << "Jumlah bahan bakar yang anda masukkan: " << jliter << " Liter" << "\nTotal yang harus dibayar: Rp." << jbayar;
    } else {
        cout << "pilihan yang anda inputkan tidak ada";
    }
}