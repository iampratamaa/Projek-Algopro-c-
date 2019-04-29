#include <iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main()
{
    char nama[99];
    cout << "Program Untuk Mengubah Nama Menjadi Huruf Kapital"<<endl;
    cout<<"Masukkan Nama Anda \t\t: ";
    cin.getline(nama, 99);
    strupr(nama);
    cout<<"Tampilan Dalam Huruf Kapital \t: "<<nama<<endl;


}
