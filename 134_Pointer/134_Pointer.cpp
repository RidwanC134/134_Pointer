#include <iostream>
using namespace std;

class mahasiswa {
    public:
        int nim;
        void showNim() {
            cout << "No Induk = " << nim << endl;
        }
};

int main() {
    mahasiswa mhs{1}; // Object Mhs
    mhs.showNim(); // Member Access Operator

    mahasiswa& refMhs = mhs; // Pointer Reference refMhs
    refMhs.nim = 2; // Member Access Operator
    mhs.showNim();

    mahasiswa* pMhs = &mhs; // Pointer Deference pMhs
}
    

int main()
{
    std::cout << "Hello World!\n";
}

