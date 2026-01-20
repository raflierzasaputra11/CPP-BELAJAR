#include <iostream>
using namespace std;

int main(){

    int a = 5;

    /*hore pertama di mulai dari a=5 
    dan hore kedua di tambah a=5+2=7 
    hore ke tiga a=7+2=9 
    berhenti di sembilan karena a lebih kecil dari 10*/

    while (a <= 10){
        cout << "hore ";
        cout << a << endl;
        a += 2;
    }
    

    return 0;
}