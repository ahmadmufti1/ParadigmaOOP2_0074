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
    //membuat function display untuk menapilkan hasil
    void display(){
        cout << "X : " << x << endl;
        cout << "Y : " << y << endl;
    }
};

//Membuat program utama untuk menjalanjan program
int main(){
    AbstraksiKlas ak;
    ak.setXY("Yogyakarta","Kampus");
    ak.display();

    return 0;
}