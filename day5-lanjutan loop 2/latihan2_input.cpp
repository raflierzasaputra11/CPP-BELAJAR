#include <iostream>
using namespace std;

int main(){

    int n, total = 0;

    cout << "masukan angka: ";
    cin >> n;

    for (int i = 2; i <= n; i += 2) {
        total += i;
    }

    cout << "total: " << total << endl;

    return 0;
}