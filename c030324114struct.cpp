#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa{
    string NIM;
    string nama;
    string alamat;
    float IPK;
};
int main(){
    Mahasiswa Farah;
    Farah.NIM = "c030324114";
    Farah.nama = "Zidni Farah Mazida";
    Farah.alamat = "Belawang, Barito Kuala";
    Farah.IPK = 3.9;

    cout << Farah.NIM << "\n";
    cout << Farah.nama << "\n";
    cout << Farah.alamat << "\n";
    cout << Farah.IPK << "\n";
    return 0;
}