#include <iostream> 
using namespace std;

int main() {
    double angka1, angka2, hasil;
    char op;

    cout << "===== SELAMAT DATANG DI PROGRAM KALKULATOR SEDERHANA ======" << endl;
    cout << "Masukkan angka pertama : ";
    cin >> angka1;
    cout << "Masukan operator : ";
    cin >> op;
    cout << "Masukkan angka kedua : ";
    cin >> angka2;

    if (op == '*') {
        hasil = angka1 * angka2;
        cout << "hasil = " << hasil << endl;
    } else if (op =='/') {
        if (angka2 == 0) {
            cout << "EROR: tidak bisa membagi dengan angka 0";
        } else {
            hasil = angka1 / angka2;
             cout << "hasil = " << hasil << endl;
        }
    } else if (op == '+') {
        hasil = angka1 + angka2;
        cout << "hasil = " << hasil << endl;
    } else if (op == '-') {
        hasil = angka1 - angka2;
        cout << "hasil = " << hasil << endl;
    } else {
        cout << "operator tidak tersedia";
    }



    
    return 0;
}