#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int modal,cicil,bunga,sisa,tagihan,tbunga,sbayar;
    int n,i;
    modal=20000000;
    cicil=500000;
    tbunga=0;
    cout << "Iampratamaa Bank" << endl;
    cout << "Jl. Kendung Rejo IX no. 24" << endl;
    cout << "Surabaya, Indonesia" << endl;
    cout << "==========================\n\n" << endl;
    cout << "Masukkan Jatuh Tempo Bulan Ke- : ";
    cin >>n;
    for (i=1;i<=n;i++)
    {
        bunga=modal*0.01;
        sisa=modal-cicil;
        modal=sisa;
        tagihan=cicil+bunga;
        tbunga=tbunga+bunga;
        tbunga+=0;
        sbayar=cicil*n;
    }
    if (sisa>=0)
    {
    cout << "Bunga yang harus dibayarkan pada bulan ke-"<<n<<"\t\t\t : Rp. "<<setprecision(2)<<setw(10)<<bunga<<endl;
    cout << "Tagihan yang harus dibayar pada bulan ke-"<<n<<"\t\t\t : Rp. "<<setprecision(2)<<setw(10)<<tagihan<<endl;
    cout << "Hutang pokok yang sudah dibayar ke bank sampai bulan ke-"<<n<<"\t : Rp. "<<setprecision(2)<<setw(10)<<sbayar<<endl;
    cout << "Bunga yang sudah dibayar ke bank sampai bulan ke-"<<n<<"\t\t : Rp. "<<setprecision(2)<<setw(10)<<tbunga<<endl;
    cout << "===================================================================================  -"<<endl;
    cout << "Sisa hutang Pak Jupri sampai bulan ke-"<<n<<"\t\t\t : Rp. "<<setprecision(2)<<setw(10)<<sisa<<endl;
    }else{
    cout << "Pembayaran Sudah Lunas pada bulan ke-40 dengan total pembayaran Rp. 24100000"<<endl;
    }

    return 0;
}
