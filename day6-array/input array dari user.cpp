#include <iostream>
using namespace std;

int main() {

    int angka[3];

    for (int i = 0; i < 3; i++) {
        cout << "masukan angka ke-" << i+1 << ": ";
        cin >> angka[i];
    }

    for (int i = 0; i < 3; i++){
        cout << angka[i] << endl;
    }

    return 0;
}