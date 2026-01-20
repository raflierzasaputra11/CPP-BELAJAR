#include <iostream>
using namespace std;

int main(){

    int nilai;

    cout << "masukan nilai (0-100): ";
    cin >> nilai;

    if (nilai >= 85 && nilai <= 100){
        cout << "nilai A";
    } else if (nilai >= 75 && nilai <= 84){
        cout << "nilai B";
    } else if (nilai >= 65 && nilai <= 74){
        cout << "nilai C";
    } else if (nilai >= 0 && nilai < 65){
        cout << "nilai D";
    } else {
        cout << "nilai tidak valid";
    }

    return 0;
}