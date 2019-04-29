#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float R,Y,Ri;
    cout << "Konversi Mata Uang Rupiah" << endl;
    cout << "Masukkan Nilai Rupiah = ";
    cin >>R;
    Y=R/125.05;
    Ri=R/3120.45;
    cout << "Nilai = " <<Y<<" Yen"<<endl;
    cout << "Nilai = " <<Ri<<" Ringgit"<<endl;
    return 0;
}
