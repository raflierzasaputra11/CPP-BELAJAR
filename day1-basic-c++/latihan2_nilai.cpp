#include <iostream>
using namespace std;

int main(){

    int nilai;
    string nama;

    cout << "masukan nama: ";
    cin >> nama;
    cout << "masukan nilai: ";
    cin >> nilai;

    //DAN  && = semua harus benar
    //ATAU || = cukup salah satu

    if (nilai >= 85 && nilai <=100){
        cout << nama << " mendapatkan " << nilai << " grade a";
    } else if (nilai >= 75 && nilai <= 84){
        cout << nama << " mendapatkan " << nilai << " grade b";
    } else if (nilai >= 65 && nilai <= 74){
        cout << nama << " mendapatkan " << nilai << " grade c";
    } else if (nilai < 65){
        cout << nama << " mendapatkan " << nilai << " grade d";
    } else {
        cout << "nilai tidak valid";
    }
    
    return 0;
}