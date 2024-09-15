# Tugas
tugas

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
// program menghitung luas
int angka;
int luas;

cout << "masukan angka: ";
cin >> angka;

luas = angka * angka;

cout << "luas anda adalah: "<< luas;

    return 0;
}



// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
// program kriteria umur
int umur;
cout << "masukan umur: ";
cin >> umur;

if (umur >= 20){
    cout << "ADULT";
}
    else if (umur >= 13 and umur <20){
        cout << "TEENAGER";
    }
else{
	cout << "CHILD";
}
    return 0;
}
