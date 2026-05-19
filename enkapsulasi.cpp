#include <iostream>
using namespace std;

class remoteLampu{
private:
string saklarNo[10];
public:
    void setSaklarNo(int i, string value){
    saklarNo[i] = value;
    }
    string getSaklarNo(int i){
    return saklarNo[i];
    }
};

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