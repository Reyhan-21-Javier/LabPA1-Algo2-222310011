#include <iostream>
#include <algorithm>
using namespace std;

const int maxArray = 50;
int number[maxArray];

int binarySearch (int x, int y, int y){
    if (z >= 1) {
        int tengah = 1 + (z - 1)/2;
        if (number[tengah] == x)
            return tengah;
        if (number[tengah] > x)
            return binarySearch (x,y,tengah - 1);
        return binarySearch (x,tengah + 1, o);
    }
    return -1;
}

int main(){
    int y;

    cout <<"Masukkan jumlah data yang dimasukkan ke array : ";
    cin >> y;


    for (int i=0 ; i<y ; i++){
        cout <<"data ke- "<< i+1 <<" : ";
        cin >> number[i];
    }
    sort (number, number + y);

    int a;
    cout <<"Masukkan data yang dicari :";
    cin >> a;

    int result = binarySearch (a, 0 ,y -1);
    if (result == -1 )
    cout <<"Data tidak ditemukan." <<endl;
    else
    cout <<"Data ditemukan "<<result<<endl;

    return 0;
}