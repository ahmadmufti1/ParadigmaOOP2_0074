#include <iostream>
using namespace std;

//membuat class sesorang dengan akses public dan modifikasi function pesan dalam bentuk virtual untuk memberi izin pada derived class
class seseorang{
public:
    virtual void pesan(){
        cout << "seseorang mengirim pesan" << endl;
    }
};

class joko : public seseorang{
public:    void pesan(){
        cout << "joko mengirim pesan" << endl;
    }
};
class lia : public seseorang{
public:    void pesan(){
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