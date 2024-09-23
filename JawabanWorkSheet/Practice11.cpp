//PRACTICE11-Halaman 255
//CATATAN!!! Flowchart halaman tersebut salah.
#include <iostream>
using namespace std;

int main() {
    int terkecil, bil1, bil2, bil3;
    
    cout << "Masukkan Bilangan Ke-1: ";
    cin >> bil1;
    cout << "Masukkan Bilangan Ke-2: ";
    cin >> bil2;
    cout << "Masukkan Bilangan Ke-3: ";
    cin >> bil3;
    
    terkecil = bil1;
    if (bil2 < bil1){
        terkecil = bil2;
        if(bil3 < terkecil){
            terkecil = bil3;
            cout << "Bilangan terkecil yaitu " << terkecil;
        }else{
            cout << "Bilangan terkecil yaitu " << terkecil;
        }
    }else{
        cout << "Bilangan terkecil yaitu " << terkecil;
    }
    return 0;
}
