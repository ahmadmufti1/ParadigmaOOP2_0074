#include <iostream>
using namespace std;

//membuat class baseclass dan menggunakan modifikasi final untuk mengunci agar tidak dapat dirubah
class baseClass final{
public:
    //membuat function perkenalan
    virtual void perkenalan(){
        cout << "Hallo saya Function dari base class" << endl;
    }
};

//membuat class baseclass1 dan menggunakan function dari class baseclass
class baseClass1{
    public:
    virtual void perkenalan(){
        cout << "Hallo saya Function dari base class" << endl;
    }
};

//membuat class derivedclass dan mengakses baseclass1 untuk menggunakan function perkenalan
class derivedClass : public baseClass1{
    public:
    void perkenalan(){
        cout << "Hallo saya Function dari derived class" << endl;
    }
};

int main(){
    derivedClass a;
    a.perkenalan();
    return 0;
}