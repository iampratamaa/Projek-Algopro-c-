#include <iostream>
#include <stdio.h>
using namespace std;

 char *hari[] =
{"Kamis", "Jum'at", "Sabtu", "Minggu", "Senin", "Selasa", "Rabu"};
char *pasar[] =
{"Wage", "Kliwon", "Legi", "Pahing", "Pon"};
int hb[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};

int jmlhari(int d, int m, int y) {
int ht = (y - 1970) * 365 - 1;
int hs = hb[m - 1] + d;
int kab = 0;
int i;
if(y % 4 == 0) {
if(m > 2) {
hs++;
}
}
for(i = 1970; i < y; i++) {
if(i % 4 == 0) {
kab++;
}
}
return (ht + hs + kab);
}

int main(void) {
int tg, bl, th, idxhari, idxpasar;
int hb[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
int hbb[] = {0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366};
cout <<"Masukkan Tahun : ";
cin >>th;
cout <<"Masukkan Bulan : ";
cin >>bl;
cout <<"Masukkan Tanggal : ";
cin >>tg;
cout<<endl;
if((bl==2)&&(tg>28)) {
cout<<"tanggal yang anda masukkan salah (1-28)! ";
}else if((bl!=2)&&(tg>31)) {
cout<<"tanggal yang anda masukkan salah (1-31)! ";
} else if ((tg>=0)&&(tg<=31))
{
if(th%4!=0){
cout << "Tanggal "<<tg<<" bulan "<<bl<<" tahun "<<th<<" adalah :"<<endl;
cout << "Hari ke-"<<(hb[bl-1]+tg)<<" di tahun "<<th<<endl;
}else if (th%4==0) {
cout << "Tanggal "<<tg<<" bulan "<<bl<<" tahun "<<th<<" adalah :"<<endl;
cout << "Hari ke-"<<(hbb[bl-1]+tg)<<" di tahun "<<th<<endl;
}
idxhari = jmlhari(tg, bl, th) % 7;
idxpasar = jmlhari(tg, bl, th) % 5;
cout << hari[idxhari]<<" "<< pasar[idxpasar]<<endl;

}
return 0;
}
