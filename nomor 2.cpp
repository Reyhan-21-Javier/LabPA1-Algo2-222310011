#include <iostream>
using namespace std;

int main(){
    int a,b,n;
    string buku[100];
    string temp;
    cout <<"Masukkan jumlah buku : ";
    cin >> n;
    for (a = 0; a < n; a++){
        cout <<"Masukkan nama buku ke-"<<a+1<<" : ";
        cin >> buku[a];
        cout <<endl;
    }
    for (a = 0; a < n;a++){
        for (b = 0; b < n-a-1 ; b++){
            if(buku[b] > buku [b+1]){
                temp = buku[b];
                buku[b] = buku[b+1];
                buku[b+1] = temp;
            }
        }
    }
    cout <<"Urutan Buku setelah diurutkan adalah :"<<endl;
    for (a = 0;a < n;a++){
        cout <<a+1<<". "<<buku[a]<<endl;
    }
    return 0;
}