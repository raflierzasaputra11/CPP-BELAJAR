#include <iostream>
using namespace std;

int main(){

    int angka[5] = {10, 25, 5, 40, 30};
    int max = angka[0];

    for (int i = 1; i < 5; i++) {
        if (angka[i] > max) {
            max = angka[i];
        }
    }

    cout << "nilai terbesar: " << max;

    return 0;
}