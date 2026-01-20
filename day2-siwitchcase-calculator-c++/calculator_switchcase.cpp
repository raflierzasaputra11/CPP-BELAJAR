#include <iostream>
using namespace std;

int main()
{
    float a,b,hasil;
    int calculator;

    cout << "=====PROGRAM CALCULATOR=====" << endl;
    cout << "1) Pertambahan (+)" << endl;
    cout << "2) Pengurangan (-)" << endl;
    cout << "3) Perkalian (*)" << endl;
    cout << "4) Pembagian (+)" << endl << endl;

    cout << "pilih penjumlahan 1-4 = ";
    cin >> calculator;
    cout << endl;

    switch (calculator){
        case 1:
        cout << "===PERTAMBAHAN===" << endl;
        cout << "masukan nilai A: ";
        cin >> a;
        cout << "masukan nilai B: ";
        cin >> b;

        hasil = a + b;
        cout << "hasil penjumlahan " << a << " + " << b << " = " << hasil;
        break;

        case 2:
        cout << "===PENGURANGAN===" << endl;
        cout << "masukan nilai A: ";
        cin >> a;
        cout << "masukan nilai B: ";
        cin >> b;

        hasil = a - b;
        cout << "hasil penjumlahan " << a << " - " << b << " = " << hasil;
        break;

        case 3:
        cout << "===PERKALIAN===" << endl;
        cout << "masukan nilai A: ";
        cin >> a;
        cout << "masukan nilai B: ";
        cin >> b;

        hasil = a * b;
        cout << "hasil penjumlahan " << a << " X " << b << " = " << hasil;
        break;

        case 4:
        cout << "===PEMBAGIAN===" << endl;
        cout << "masukan nilai A: ";
        cin >> a;
        cout << "masukan nilai B: ";
        cin >> b;

        hasil = a / b;
        cout << "hasil penjumlahan " << a << " / " << b << " = " << hasil;
        break;
        
        default:
        cout << "Pilihan tidak di temukan!";
    }

    return 0;
}
