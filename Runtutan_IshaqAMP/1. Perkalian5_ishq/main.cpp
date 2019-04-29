#include <iostream>

using namespace std;

int main()
{
    int I,N,Batas=5, Jumlah;

    cout << "Program Menampilkan Bilangan Perkalian" << endl;

    cout << "Bilangan yang akan dikalikan =";
    cin >> N;

    cout << "Menampilkan Hasil Perkalian =" << endl;

    for (I=0;I<=Batas;I++)
    {
        Jumlah=I*N;
        cout << I << "*" << N << Jumlah << endl;
    }
    return 0;
}
