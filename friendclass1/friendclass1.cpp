// friendclass1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class siswa;
class orang
{
private:
    string nama;

public:
    void setNama(string pNama);
    friend class siswa;
};

class siswa
{
private:
    int id;

public:
    void setid(int pid);
    void displayAll(orang& a);
};

void siswa::displayAll(orang& a)
{
    cout << id << endl << a.nama;
}
void orang::setNama(string pNama)
{
    nama = pNama;
}
void siswa::setid(int pid)
{
    id = pid;
}
int main()
{
    orang joko;
    joko.setNama("Joko Susilo");
    siswa joko_siswa;
    joko_siswa.setid(1);
    joko_siswa.displayAll(joko);
    return 0;
}
