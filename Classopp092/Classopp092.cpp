#include <iostream>
using namespace std;

class Mahasiswa {
private:
    int nim; 
    string nama;
    float nilai;
public: 
    void input() {
        cout << "Masukkan NIM : ";
        cin >> nim;
        cout << "Masukkan Nama : ";
        cin >> nama;
        cout << "Masukkan Nilai : ";
        cin >> nilai;
    }
    void printData();
};

void Mahasiswa::printData() { 
    cout << "\nData Mahasiswa";
    cout << "\nNIM : " << nim;
    cout << "\nNamanya : " << nama;
    cout << "\nNilai : " << nilai;

}
class matakuliah { 
private: 
    string kode; 
    string namaMk;
    int sks;
public: 
    void inputMk() { 
        cout << "\n\nMasukkan kode matakuliah : ";
        cin >> kode;
        cout << "Masukkan Nama matakuliah : ";
        cin >> namaMk;
        cout << "Masukkan SKS : ";
        cin >> sks;
    }
    void tampil() {
        cout << "\nData Maatakuliah";
        cout << "\nKode matakuliah : " << kode;
        cout << "\nNama matakuliah : " << namaMk;
        cout << "\nsks : " << sks;
    }
};

int main() 
{
    Mahasiswa mhs;
    matakuliah mk;

    mhs.input();
    mhs.printData();

    mk.inputMk();
    mk.tampil();
}
