// friendfunctionsatu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private:
    string nama;

public:
    friend void setNama(mahasiswa& a, string);
};

void setNama(mahasiswa& a, string b)
{
    a.nama = b;
    cout << a.nama;
}


