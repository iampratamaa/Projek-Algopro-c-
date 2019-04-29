#include <iostream>
using namespace std;
int hari(int a, int b, int c){
int feb,r,f=0,t;
if (c%4==0){
    feb=29;}
else
    feb=28;

int e[12]={31,feb,31,30,31,30,31,31,30,31,30,31};
for (int i=1; i<b; i++){
    f=f+e[i];}
    r=f+a;
    int p=((c-1)/4)+(c+r);
    int j=r%5;
string wt[5]={"Pahing", "Kliwon", "Legi", "Wage", "Pon"};
string d[7]={"Jumat","Sabtu","Minggu","Senin","Selasa","Rabu","Kamis"};
if(c%4!=0&&b==2&&a==29){
    cout <<"Tanggal yang anda masukan salah <1-28>!";
}
else if(a>=31){
    cout <<"Tanggal yang anda masukan salah <1-31>!";
}
else {
int x=p%7;
cout << "tanggal "<<a<<" bulan "<<b<<" tahun "<<c<<endl;
cout << "hari- "<<r<<" pada tahun "<<c<<endl;
cout << d[x]<<" "<<wt[j];}
return r;
}

int main()
{
    int tgl, bln, thn;
    cout << "masukan tahun: "; cin >>thn;
    cout << "masukan bulan: "; cin>>bln;
    cout << "masukan tanggal: "; cin>>tgl;
    hari(tgl,bln,thn);
    return 0;
}
