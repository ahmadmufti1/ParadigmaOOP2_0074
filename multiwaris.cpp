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
