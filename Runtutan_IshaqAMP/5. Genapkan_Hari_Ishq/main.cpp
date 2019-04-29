#include <iostream>

using namespace std;

int main()
{
    int T,B,M,H,A,J;
    cout << "Menggenapkan hari" << endl;
    cout << "Masukkan hari =";
    cin>>A;
    T=A/365;
    B=A%365/30;
    M=A%365%30/7;
    H=A%365%30%7;
    cout << "Hasilnya adalah " <<T<< " Tahun, " <<B<< " Bulan, " <<M<< " Minggu, " <<H<< " Hari." <<endl;
    return 0;
}
