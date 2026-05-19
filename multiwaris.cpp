//mendeklarasi library
#include <iostream>
using namespace std;

//membuat class orang dengan akses public dan juga mendeklarasi variabel umur dan membuat function untuk menampilkan umur tersebut
class orang{
    public:
    int umur;
    orang(int umur)
    {
        cout << "orang dibuat dengan umur"<< umur  << "\n" << endl;
    }
};

//Membuat class pekerja dengan mengakses class orang untuk menggunakan fungsi maupun variabel yang ada pada class orang tersebut dan kita bisa mengubah nilainya
class pekerja : virtual public orang{
    public:
    pekerja(int pUmur) : orang(pUmur)
    {
        cout << "pekerja dibuat\n" << endl;
    }
};