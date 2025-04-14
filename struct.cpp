#include <iostream>
using namespace std;

struct Book {
    string judul;
    string jumlahHalaman;
    string pengarang;
};

int main(){
    Book bk; 

    cout << "masukan judul = ";
    cin >> bk.judul;
    cout << "masukan jumlah halaman = ";
    cin >> bk.jumlahHalaman;
    cout << "masukan pengarang = ";
    cin >> bk.pengarang;

    cout << endl;
    cout << "tampilkan data buku" << endl;
    cout << endl;
    
    cout << "judul buku = " << bk.judul << endl;
    cout << "jumlah halaman = " << bk.jumlahHalaman << endl;
    cout << "pengarang buku = " << bk.pengarang << endl;
}