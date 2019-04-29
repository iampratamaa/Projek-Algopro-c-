#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Masukkan Tahun (1900-2005) : " ;
    cin >> a;
    if (a<1900){
        cout <<"Maaf, tahun input dibawah 1900";}
    else if (a>2005){
        cout <<"Maaf, tahun input diatas 2005";}
    else if (a%4==0){
        cout << a <<" adalah tahun kabisat";}
    else {cout << a <<" adalah bukan tahun kabisat";}
    return 0;
}

