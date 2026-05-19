#include <iostream>
using namespace std;

//Membuat class orang yang berisikan variabel umur dan function orang dengan parameter pUmur dan menginisialisasinya lalu menampilkannya
class orang{
    public:
    int umur;

    orang(int pUmur) :umur(pUmur)
    {
        cout << "orang dibuat dengan umur"<< umur  << "\n" << endl;
    }
};

//Membuat class pekerja dan mengkases class orang untuk menggunakan function orang dan memodifikasinya
class pekerja : public orang{
    public:
    pekerja(int pUmur) : orang(pUmur)
    {
        cout << "pekerja dibuat\n" << endl;
    }
};

//Membuat class pelajar dan mengkases class orang untuk menggunakan function orang dan memodifikasinya
class pelajar : public orang{
    public:
    pelajar(int pUmur) : orang(pUmur)
    {
        cout << "pelajar dibuat\n" << endl;
    }
};

//Membuat class budi dan mengkases class pekerja dan pelajar untuk menggunakan functionnya lalu menampilkan nilai pada setiap class tersebut 
class budi : public pekerja, public pelajar{
    public:
    budi(int pUmur) :
    pekerja(pUmur),
    pelajar(pUmur)
    {
        cout << "budi dibuat\n" << endl;
    }
};

int main(){
    budi a(12);
    return 0;
}