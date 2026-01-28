#include <iostream>
using namespace std;

int main(){

    int angka[6] = {3, 4, 7, 10, 11, 20};

    for (int i = 0; i < 6; i++){
        if (angka[i] % 2 == 0) {
            cout << angka[i] << " genap" << endl;
        }
    }

    return 0;
}