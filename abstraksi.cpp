//deklarasi library
#include <iostream>
using namespace std;

//membuat class abstraksiKlas
class AbstraksiKlas{
    private:
    //deklarasi variabel x dan y
    string x,y;
    public:
    //membuat function setXY dengan parameter string a dan b dan menginisialisainya ke dalam bentuk x dan y
    void setXY(string a,string b){
        x = a;
        y = b;
    }
};
