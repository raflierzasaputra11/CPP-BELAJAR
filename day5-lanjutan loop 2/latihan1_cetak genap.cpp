#include <iostream>
using namespace std;

int main(){

    cout << "angka genap 1 - 10:" << endl;

    for (int i = 1; i <= 10; i++){
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    return 0;
}