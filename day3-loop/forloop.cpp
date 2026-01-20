#include <iostream>
using namespace std;

int main(){

    /*for(inisialisasi, loop kondisi, increment){
            statment
    }*/

    cout << "loop 1 \n";
    for(int i = 1; i <= 10; i++){
        cout << i << endl;
    }

    cout << "loop 2 \n";
    for(int i = 1; i <= 10; i += 2){
        cout << i << endl;
    }

    cout << "loop 3 \n";
    for(int i = 1; i >= -10; i--){
        cout << i << endl;
    }

    cout << "loop 4 \n";
    
    int total = 0;
    for(int i = 1; i <= 10; i++){
        total += 1;
        cout << i << " || " << total << endl;
    }

    return 0;
}