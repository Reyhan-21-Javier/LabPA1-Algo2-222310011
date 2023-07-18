#include <iostream>
using namespace std;

class contoh { //Nama class nya
private: //penentu akses
  int nilai; //input variabel nilai

public: //penentu akses 
  contoh(int n) { nilai = n; } //inisialisasi nilai contoh dengan variabel nilai dan n
  int getNum() { return nilai; } //memanggil nilai
};

int main() {
  contoh obj(100); //membuat objek dari sebuah class yang bernilai 100
  cout << "Nilai Yang diinput: " << obj.getNum() << endl; //output 

  return 0;
}
