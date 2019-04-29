#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    int j,t,a,tp,dp,bg,hf,ag,cc;//j=jenis, t=tipe, a=administrasi, tp=total pembayaran, dp=uang muka, bg=bunga, hf=harga fix, ag=angsuran, cc=cicilsn
    int harga_36=250000000;
    int harga_45=300000000;
    int jw,jwb; //jw=jangka waktu dalam tahun, jwb=jangka waktu bulan
    cout << "Pilih Jenis Pembayaran!" << endl;
    cout << "1. Tunai" << endl;
    cout << "2. Kredit" << endl;
    cout << "Masukkan kode jenis pembayaran yang dipilih : ";
    cin >> j;
    cout << "Pilih Tipe!" << endl;
    cout << "1. Tipe 36" << endl;
    cout << "2. Tipe 45" << endl;
    cout << "Masukkan kode tipe rumah yang dipilih : ";
    cin >> t;
    if ((j==1)&&(t==1))
    {
     a=harga_36*0.02;
     tp=a+harga_36;
     cout <<endl;
     cout << "Detail Pembayaran :"<<endl;
     cout << "==================================================="<<endl;
     cout << "Harga Pokok Rumah \t:Rp. "<<setprecision(2)<<setw(10)<<harga_36<<endl;
     cout << "Uang Administrasi \t:Rp. "<<setprecision(2)<<setw(10)<<a<<endl;
     cout << "Total Pembayaran \t:Rp. "<<setprecision(2)<<setw(10)<<tp<<endl;
    }
    else if ((j==1)&&(t==2))
    {
     a=harga_45*0.025;
     tp=a+harga_45;
     cout << "Harga Pokok Rumah \t:Rp. "<<setprecision(2)<<setw(10)<<harga_45<<endl;
     cout << "Uang Administrasi \t:Rp. "<<setprecision(2)<<setw(10)<<a<<endl;
     cout << "Total Pembayaran \t:Rp. "<<setprecision(2)<<setw(10)<<tp<<endl;
    }
    else if ((j==2)&&(t==1))
    {
     cout << "Harga Pokok Rumah \t:Rp. "<<harga_45<<setprecision(2)<<setw(10)<<endl;
     cout << "Masukkan uang muka \t:Rp. ";
     cin >>dp;
     cout << "Masukkan Jangka cicilan dalam tahun : ";
     cin >> jw;
     hf=harga_36-dp;
     a=harga_36*0.02;
     bg=hf*0.01;
     jwb=jw*12;
     cc=hf/jwb;
     ag=cc+bg;
     tp=(ag*jwb)+ a + dp ;
     cout <<endl;
     cout << "Detail Pembayaran :"<<endl;
     cout << "==================================================="<<endl;
     cout << "Biaya Administrasi \t\t:Rp. "<<setprecision(2)<<setw(10)<<a<<endl;
     cout << "Bunga Perbulan \t\t\t:Rp. "<<setprecision(2)<<setw(10)<<bg<<endl;
     cout << "Angsuran yg dibayar tiap bulan \t:Rp. "<<setprecision(2)<<setw(10)<<ag<<endl;
     cout << "Total Pembayaran \t\t:Rp. "<<setprecision(2)<<setw(10)<<tp<<endl;
    }
    else if ((j==2)&&(t==2))
    {
     cout << "Harga Pokok Rumah \t:Rp. "<<harga_45<<setprecision(2)<<setw(10)<<endl;
     cout << "Masukkan uang muka \t:Rp. ";
     cin >>dp;
     cout << "Masukkan Jangka cicilan dalam tahun : ";
     cin >> jw;
     hf=harga_45-dp;
     a=harga_45*0.025;
     bg=hf*0.01;
     jwb=jw*12;
     cc=hf/jwb;
     ag=cc+bg;
     tp=(ag*jwb)+ a + dp ;
     cout <<endl;
     cout << "Detail Pembayaran :"<<endl;
     cout << "==================================================="<<endl;
     cout << "Biaya Administrasi \t\t:Rp. "<<setprecision(2)<<setw(10)<<a<<endl;
     cout << "Bunga Perbulan \t\t\t:Rp. "<<setprecision(2)<<setw(10)<<bg<<endl;
     cout << "Angsuran yg dibayar tiap bulan \t:Rp. "<<setprecision(2)<<setw(10)<<ag<<endl;
     cout << "Total Pembayaran \t\t:Rp. "<<setprecision(2)<<setw(10)<<tp<<endl;
    }
    else {
    cout<<"Maaf Kami Tidak Memberikan Opsi Selain Diatas ^^"<<endl;}
    return 0;
}
