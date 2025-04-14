#include <iostream>
using namespace std;
#include <string>


struct Pengarang
{
    string nama;
    string alamat;
};

struct Book {
    string judul;
    string jumlahHalaman;
    Pengarang pengarang;
};

int main(){
    Book bk[2]; 

    for (int i = 0; i < 2; i++)
    {
        cout << "masukan judul = ";
        getline (cin, bk[i].judul);
        cout << "masukan jumlah halaman = ";
        cin >> bk[i].jumlahHalaman;
        cin.ignore ();
        cout << "masukan pengarang = ";
        getline (cin, bk[i].pengarang.nama);
        cout << "masukkan alamat pengarang = ";
        getline(cin, bk[i].pengarang.alamat);
    }

    cout << endl;
    cout << "tampilkan data buku" << endl;
    cout << endl;
    for (int i= 0; i < 2; i++)
    {
        cout << "judul buku = " << bk[i].judul << endl;
        cout << "jumlah halaman = " << bk[i].jumlahHalaman << endl;
        cout << "pengarang buku = " << bk[i].pengarang.nama << endl;
        cout << "alamat pengarang = " << bk[i].pengarang.alamat << endl;
    }
    
}