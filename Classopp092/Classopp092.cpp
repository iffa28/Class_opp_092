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
    }
};
int main()
{
    std::cout << "Hello World!\n";
}
