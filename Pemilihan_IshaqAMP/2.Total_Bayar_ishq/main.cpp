#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    int dp,jb,hp,tha,diskon,ttl;
    cout << "\t\t\tOnline Shop : IamprataMart" << endl;
    cout << "\t\t\tJl. Kendung Rejo IX no. 24" << endl;
    cout << "\t\t\t==========================\n\n" << endl;
    cout << "DAFTAR PRODUK :\n"<<endl;
    cout << "1. Susu Enfagrow ukuran 400 gram\n";
    cout << "2. Susu Enfagrow ukuran 800 gram\n\n";
    cout << "Masukkan Pilihan Produk : ";
    cin >>dp;
    cout << "Jumlah Barang : ";
    cin >>jb;
    if (dp==1)
        hp = 116500;
    else
    if (dp==2)
        hp = 231000;
    else
        hp = 0;
    tha=hp*jb;
    if ((jb>=1) && (jb<=3))
        diskon = 0;
    else
    if ((jb>3) && (jb<=6))
        diskon = tha*0.03;
    else
    if ((jb>6) && (jb<=10))
        diskon = tha*0.07;
    else
        diskon =tha*0.12;
    ttl=tha-diskon;
    cout << "\t\t\tHasil perhitungan pengeluaran\n\n\n";
    cout << "Total harga \t\t : Rp. "<<setprecision(2)<<setw(10)<<tha<<"\n";
    cout << "Diskon \t\t\t : Rp. "<<setprecision(2)<<setw(10)<<diskon<<"\n";
    cout << "Ongkos Kirim\t\t : Free ";
    cout << "\n-----------------------------------------------------------\n";
    cout << "Total Pembayaran \t : Rp. "<<setprecision(2)<<setw(10)<<ttl<<"\n";

    return 0;
}
