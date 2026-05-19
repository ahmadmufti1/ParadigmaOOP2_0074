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

//membuat program utama untuk menajalankan seluruh program
int main(){
    remoteLampu lampu;
    lampu.setSaklarNo(0, "Lampu Teras Rumah");
    lampu.setSaklarNo(1, "Lampu Rang Tammu");
    lampu.setSaklarNo(2, "Lampu Kamar Tidur");
    lampu.setSaklarNo(3, "Lampu Dapur");
    
    cout << lampu.getSaklarNo(0) << endl;
    cout << lampu.getSaklarNo(1) << endl;
    cout << lampu.getSaklarNo(2) << endl;
    cout << lampu.getSaklarNo(3) << endl;

    return 0;
}