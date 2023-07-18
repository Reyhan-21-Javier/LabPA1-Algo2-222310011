#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;


int main (){

  char kalimat1[20];
  char kalimat2[20];
  cout << "Masukan Kalimat Pertama = ";
  cin >> kalimat1;
  cout << "Masukan Kalimat Kedua = ";
  cin >> kalimat2;
  strcat(kalimat1, kalimat2);
  cout << "Hasil Penggabunganya adalah : " << kalimat1;

  getchar();
}
