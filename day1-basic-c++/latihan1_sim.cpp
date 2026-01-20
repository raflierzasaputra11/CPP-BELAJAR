#include <iostream>
using namespace std;

int main(){

    int umur;

    cout << "masukan umur anda: ";
    cin >> umur;

    if (umur >= 17) {
        cout << "boleh membuat sim";
    } else {
        cout << "belum boleh membuat sim";
    }

    return 0;
}