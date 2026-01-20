#include <iostream>
using namespace std;

int main(){

    int angka;

    cout << "masukan angka: ";
    cin >> angka;

    if (angka == 0) {
        cout << "angka bulat";
    } else if (angka > 0){
        cout << "bilangan positif";
    } else {
        cout << "bilangan negatif";
    }

    return 0;
}