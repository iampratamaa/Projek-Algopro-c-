#include <iostream>

using namespace std;

int main()
{
    int jam1,menit1,jam2,menit2;
    int Jamlama,Menitlama,Lama;
    cout << "Program Menentuhkan Lama Bekerja Seorang Pegawai" << endl;
    cout << "================================================" << endl;
    cout << "Jam Datang (Jam,Menit) = ";
    cin >>jam1; cin >>menit1;
    cout << "Jam Pulang (Jam,Menit) = ";
    cin >>jam2; cin >>menit2;
    if(jam1>=jam2)
    {
        jam2=jam2+12;
    }
    if(menit1>=menit2)
    {
        jam2=jam2-1;
        menit2=menit2+60;
    }
    Jamlama=jam2-jam1;
    Menitlama=menit2-menit1;
    Lama=(Jamlama*60)+Menitlama;
    cout<<"Lama(menit) "<<Lama<<endl;
    cout<<"Lama(Jam,Menit) "<<Jamlama<<" : "<<Menitlama<<endl;

    return 0;
}
