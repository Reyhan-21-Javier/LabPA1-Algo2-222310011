#include<iostream>

using namespace std;

int hargaSetelahPajak(int hargaDasar){
  return hargaDasar + (hargaDasar*10/100);
}

int main()
{
  int hargaMawar = 10000;
  int hargaFinalMawar = hargaSetelahPajak(hargaMawar);
  cout << "Harga mawar 1 tangkai Rp. " << hargaFinalMawar << endl;

  return 0;
}

//            ANALIS PROGRAM DIATAS                 
//--------------------------------------------------
// Baris ke 5 merupakan deklarasi fungsi hargaSetelahPajak, yang bervariabel hargaDasar yang bertipe Integer 
// Baris ke 6 merupakan proses hargaDasar ditambah (hargaDasar dikali 10 dibagi 100) 
// Baris ke 9-13 merupakan fungsi Utama 
// Baris ke 11 hargaMawar adalah 10.000 yang bertipe integer 
// Baris ke 12 hargaFinalMawar yang bertipe integer sama dengan hargaSetelahPajak 
// Baris ke 13 Perintah untuk mencetak Harga mawar 1 tangkai 
//--------------------------------------------------