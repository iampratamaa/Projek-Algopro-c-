#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    float A,T,S;
    cout << "Program Mencari Sisi Miring Segitiga" << endl;
    cout << "Masukkan Alas = ";
    cin>>A;
    cout << "Masukkan tinggi = ";
    cin>>T;
    S=sqrt((A*A)+(T*T));
    cout << "Hasilnya adalah "<<S<<endl;
    return 0;
}
