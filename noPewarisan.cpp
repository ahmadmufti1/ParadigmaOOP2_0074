#include <iostream>
using namespace std;

//membuat class baseclass dan menggunakan modifikasi final untuk mengunci agar tidak dapat dirubah
class baseClass final{
public:
    //membuat functio perkenalan
    virtual void perkenalan(){
        cout << "Hallo saya Function dari base class" << endl;
    }
};
