#include <iostream>
using namespace std;

//membuat class sesorang dengan akses public dan modifikasi function pesan dalam bentuk virtual untuk memberi izin pada derived class
class seseorang{
public:
    virtual void pesan(){
        cout << "seseorang mengirim pesan" << endl;
    }
};

//membuat class joko dan mengakses class seseorang untuk menggunakan function pesan dan memodifikasinya
class joko : public seseorang{
public:    
    void pesan()
    {
        cout << "joko mengirim pesan" << endl;
    }
};
//membuat class lia dan mengakses class seseorang untuk menggunakan function pesan dan memodifikasinya
class lia : public seseorang{
public:    
    void pesan()
    {
        cout << "lia mengirim pesan" << endl;
    }
};

int main(){
    seseorang *obyek;
    joko a;
    lia b;
    
    obyek = &a;
    obyek->pesan();
    obyek = &b;
    obyek->pesan();

    seseorang *obyek;
    return 0;
}