#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
    int a,b,h;
    char o;
    cout << "Kalkulator Dua Operand" << endl;
    cout << "======================" << endl;
    cout <<"Masukkan Operasi Penghitungan :";
    cin >>a>>o>>b;
    if (o=='+')
    {
    h=a+b;
    cout<<"Hasil = "<<h;
    }
    else if (o=='-')
    {
    h=a-b;
    cout<<"Hasil = "<<h;
    }
    else if (o=='*')
    {
    h=a*b;
    cout<<"Hasil = "<<h;
    }
    else if (o=='/')
    {
    h=a/b;
    cout<<"Hasil = "<<h;
    }
    return 0;
}
