//PRACTICE 12, Halaman 256, Menggunakan Perulangan For
#include <iostream>
#include <vector>
using namespace std;

int main() {
    float terkecil, terbesar;
    int n, i;
    
    cout << "Masukan Jumlah Bilangan yang Akan Dimasukan: ";
    cin >> n;
    vector<float> bilangan(n,0);
    for (size_t i=0; i<=n;i++){
        cout << "Masukan Bilangan Ke-" << i << ": ";
        cin >> bilangan.at(i);
    }

    return 0;
}
