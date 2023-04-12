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
    void inputMK() {
        cout << "\n\nMasukkan kode matakuliah : ";
        cin >> kode;
        cout << "Masukkan Nama matakuliah : ";
        cin >> namaMk;
        cout << "Masukkan SKS : ";
        cin >> sks;
    }
};
int main()
{
    std::cout << "Hello World!\n";
}
