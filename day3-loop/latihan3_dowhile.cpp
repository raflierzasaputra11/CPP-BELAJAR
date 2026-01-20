#include <iostream>
using namespace std;

int main(){

    int angka;
    int total = 0;

    do {
        cout << "masukan angka (0 untuk berhenti): ";
        cin >> angka;

        total += angka;
    }while (angka != 0);

    cout << "total angka: " << total << endl;

    return 0;
}