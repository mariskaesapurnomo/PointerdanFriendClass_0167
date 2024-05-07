// pointersatu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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

    mahasiswa mhs{ 1 };       //object mhs
    mhs.showNim();         //member access operator

    mahasiswa& refMhs = mhs;        //pointer references refmhs
    refMhs.nim = 2;                 //member access operator
    mhs.showNim();

    mahasiswa* pMhs = &mhs;     //pointer dereferences pmhs
    pMhs->nim = 3;              //arrow operator
    pMhs->showNim();
    return 0;
}
