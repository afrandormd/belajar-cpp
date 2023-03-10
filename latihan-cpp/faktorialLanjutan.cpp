#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    // faktorial
    int i, hasil, angka;
    bool pilihan;

    // ulang program
    do
    {
        system("cls");
        hasil = 1;
        cout << "Masukkan angka: ";
        cin >> angka;
        for (i = 1; i <= angka; i++)
        {
            hasil = hasil * i;
            if (i < angka)
            {
                cout << i << " * ";
            }
            else
            {
                cout << i << " = ";
            }
        }
        cout << hasil;
        cout << "\nMau ulang lagi (0/1)? ";
        cin >> pilihan;
    } while (pilihan);
}