#include <iostream>
using namespace std;

int main(){

    int umur, punyaktp=1;

    cout << "umur: ";
    cin >> umur;
    cout << "punya ktp: ";
    cin >> punyaktp;

    if (umur >= 17 && punyaktp == 1) {
        cout << "boleh ikiut pemilu";
    } else {
        cout << "tidak boleh ikut pmilu";
    }


    return 0;
}