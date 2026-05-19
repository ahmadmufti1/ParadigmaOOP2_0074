#include <iostream>
using namespace std;
//membuat class baseClass yang berisi function perkenalan dan mengunci modifikasi
class baseClass{
    public:
    virtual void perkenalan() final{
        cout << "Hallo saya Function dari base class";
    }
};

//membuat class derivedclass dan mengakses baseClass dan membuat function perkenalan1
class derivedClass : public baseClass{
    public:
    void perkenalan1(){
        cout << "Hallo saya Function dari derived class";
    }
};

//membuat program utama untuk menjalankan program
int main(){
    derivedClass a;
    a.perkenalan1();
       return 0;
}