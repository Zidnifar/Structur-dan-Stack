#include <iostream>
using namespace std;

struct Mahasiswa{
    string NIM;
    string nama;
    string alamat;
    float IPK;
};
int main(){
    Mahasiswa Farah;
    Mahasiswa* ptr = &Farah;

    ptr->NIM = "c030324114";
    ptr->nama = "Zidni Farah Mazida";
    ptr->alamat = "Belawang, Barito Kuala";
    ptr->IPK = 3.9;
    system("cls");
    cout << "----------------------" << endl << "DATA MAHASISWA" << endl << "----------------------" << endl;
    cout << "NIM: " << ptr->NIM << "\n";
    cout << "Nama: " << ptr->nama << "\n";
    cout << "Alamat: " << ptr->alamat << "\n";
    cout << "IPK: " << ptr->IPK << "\n";

    return 0;
}