#include <iostream>
using namespace std;
int main() {
  int nilai[5], batas, cari, hasil;
  cout << " Masukkan Banyaknya Bilangan = ";
  cin >> batas;
  cout << endl << endl;
  for (int x = 0; x < batas; x++) {
    cout << " Masukkan Index ke - " << x << " = ";
    cin >> nilai[x];
  }
  cout << endl << endl;
  cout << " Deretan Bilangan = ";
  for (int y = 0; y < batas; y++) {
    cout << nilai[y] << " ";
    }
      cout << endl << " Masukkan Bilangan yang akan dicari = ";
      cin >> cari;
      for (int z=0; z<5; z++){
      if (nilai[z] == cari){
cout << " Bilangan "<<cari<<" ditemukan sebanyak 1 \n pada posisi ke = " << z;
break;
        }else if(cari != 1 && cari != 4 && cari != 5 && cari != 6&&cari != 3){
        cout<<" Bilangan tidak ditemukan ";
        break;
        }
        }
    }
