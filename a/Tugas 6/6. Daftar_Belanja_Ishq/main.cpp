#include <iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
    char b[20][25];
    int N,i,jb[20],hb[20],tb[20];
    int tbr,tpb;
    int diskon;
    cout<<"Jumlah Barang Yang Akan Dibeli = ";
    cin>>N;
    cin.get();
    for (i=0; i<N; i++)
{
    cout <<endl;
    cout<<"Barang yang ke-"<<i+1<<endl;
    cout<<"Masukkan Nama Barang \t= ";
    cin.getline (b[i], 25);
    cout<<"Masukkan Jumlah Barang \t= ";
    cin>>jb[i];
    cin.get();
    cout<<"Masukkan Harga Barang\t= ";
    cin>>hb[i];
    cin.get();

    tb[i]=jb[i]*hb[i];
    tbr=tbr+tb[i];
    tbr++;
    if (tbr>=50000)
    {
        diskon=tbr*0.1;
    } else {
        diskon=0;
    }
    tpb=tbr-diskon;
}
    cout<<"======================================================================================================="<<endl;
    cout<<"=                                         TOKO ONLINE MAJU TERUS                                      ="<<endl;
    cout<<"======================================================================================================="<<endl;
    cout<<"="<<setw(8)<<"No"<<setw(6)<<"|"<<setw(15)<<"Nama"<<setw(8)<<"|"<<setw(18)<<"Harga"<<setw(8)<<"|"<<setw(13)<<"       Jumlah       |       Total     ="<<endl;
    cout<<"======================================================================================================="<<endl;
    for (i=0; i<N; i++)
    {
    cout<<"="<<setw(8)<<i+1<<setw(21)<<b[i]<<setw(26)<<hb[i]<<setw(21)<<jb[i]<<setw(20)<< tb[i]<<"     ="<<endl;
    }
    cout<<"======================================================================================================="<<endl;
    cout << "Total harga \t\t : Rp. "<<setprecision(2)<<setw(10)<<tbr<<"\n";
    cout << "Diskon \t\t\t : Rp. "<<setprecision(2)<<setw(10)<<diskon<<"\n";
    cout << "Total Pembayaran \t : Rp. "<<setprecision(2)<<setw(10)<<tpb<<"\n";
    getch();
    return 0;

}
