#include <iostream>
#include <string.h>
using namespace std;

int main() {
  char Fa[60] = "KAMPUS UNGU INSTITUT BISNIS DAN INFORMATIKA KESATUAN";
  cout << "kata yang ingin dibalikkan dan di rubah menjadi huruf kecil adalah : "<<endl<<Fa<<endl;
  int b = strlen(Fa);
  
  cout <<endl<<endl;
  cout << "menjadi : "<<endl;
  for (int a = b - 1; a >= 0; a--) {
    Fa[a]=tolower(Fa[a]);
    cout<<Fa[a];
    
  }

}