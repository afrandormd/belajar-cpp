#include <iostream>

using namespace std;

int main(){

    // Program mencari nilai terbesar dan terkecil 
    // create and initialitation variable
    int nilai1, nilai2, nilai3;
    nilai1 = 0;
    nilai2 = 0;
    nilai3 = 0;

    // input nilai 1
    cout << "Masukkan nilai 1: ";
    cin >> nilai1;
    // input nilai 2
    cout << "Masukkan nilai 2: ";
    cin >> nilai2;
    // input nilai 3
    cout << "Masukkan nilai 3: ";
    cin >> nilai3;
 
    // mencari nilai terbesar dan terkecil
    // mencari nilai terendah
    int minValue = nilai1;
    if (nilai2 < minValue){
        minValue = nilai2;
    } if (nilai3 < minValue){
        minValue = nilai3;
    }

    // mencari nilai terbesar
    int maxValue = nilai1;
    if (nilai2 > maxValue){
        maxValue = nilai2;
    } if (nilai3 > maxValue){
        maxValue = nilai3;
    }

    // tampilkan nilai
    cout << "NIlai Terkecil: " << minValue;
    cout << "\nNilai Terbesar: " << maxValue;

    return 0;
}