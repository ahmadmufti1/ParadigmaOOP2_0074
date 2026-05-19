//deklarasi library
#include <iostream>
using namespace std;

//membuat class remoteLampu
class remoteLampu{
private:
//mendeklarasi variabel saklarNo dengan tipe data string dan memiliki nilai 10
string saklarNo[10];
public:
//membuat function setSaklarNo dengan parameter int i dan string value dan menginisialisi saklarNo[i] ke dalam bentuk value
    void setSaklarNo(int i, string value){
    saklarNo[i] = value;
    }
    //mengambil nilai saklarno dan mengembalikannya
    string getSaklarNo(int i){
    return saklarNo[i];
    }
};
