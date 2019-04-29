 #include <iostream>
 using namespace std;
main()
{ int tgl,bln,thn,k,f,h,sisa;
cout<<"==============================================="<<endl;
cout<<" -- ** -- Program Pencarian Hari Lahir -- ** --"<<endl;
cout<<"==============================================="<<endl;
cout<<endl;
cout<<"Masukkan Tanggal Lahir Anda      --> ";cin>>tgl;
cout<<"Masukkan Bulan Lahir Anda (1-12) --> ";cin>>bln;
cout<<"Masukkan Tahun Lahir Anda        --> ";cin>>thn;
cout<<endl;
{
if (bln == 1)
cout<<"Anda Lahir Pada Tanggal ' "<<tgl<<" Januari "<<thn<<" '"<<endl;
else
if (bln == 2)
cout<<"Anda Lahir Pada Tanggal ' "<<tgl<<" Februari "<<thn<<" '"<<endl;
else
if (bln == 3)
cout<<"Anda Lahir Pada Tanggal ' "<<tgl<<" Maret "<<thn<<" '"<<endl;
else
if (bln == 4)
cout<<"Anda Lahir Pada Tanggal ' "<<tgl<<" April "<<thn<<" '"<<endl;
else
if (bln == 5)
cout<<"Anda Lahir Pada Tanggal ' "<<tgl<<" Mei "<<thn<<" '"<<endl;
else
if (bln == 6)
cout<<"Anda Lahir Pada Tanggal ' "<<tgl<<" Juni "<<thn<<" '"<<endl;
else
if (bln == 7)
cout<<"Anda Lahir Pada Tanggal ' "<<tgl<<" Juli "<<thn<<" '"<<endl;
else
if (bln == 8)
cout<<"Anda Lahir Pada Tanggal ' "<<tgl<<" Agustus "<<thn<<" '"<<endl;
else
if (bln == 9)
cout<<"Anda Lahir Pada Tanggal ' "<<tgl<<" September "<<thn<<" '"<<endl;
else
if (bln == 10)
cout<<"Anda Lahir Pada Tanggal ' "<<tgl<<" Oktober "<<thn<<" '"<<endl;
else
if (bln == 11)
cout<<"Anda Lahir Pada Tanggal ' "<<tgl<<" November "<<thn<<" '"<<endl;
else
if (bln == 12)
cout<<"Anda Lahir Pada Tanggal ' "<<tgl<<" Desember "<<thn<<" '"<<endl;
cout<<endl;
}
if(thn%4!=0)
f=28;
else
if ((thn%100==0)&&(thn%400!=0))
f=28;
else
f=29;
{cout<<"Tahun "<<thn<<" adalah ";
if(thn%4!=0)
cout<<"Bukan Tahun Kabisat"<<endl;
if ((thn%100==0)&&(thn%400!=0))
cout<<"Bukan Tahun Kabisat"<<endl;
else
if((thn%4!=0) && ((thn%100==0)&&(thn%400!=0)))
cout<<"Tahun Kabisat"<<endl;}
cout<<"Maka, Bulan Februari pada tahun "<<thn<<" ada "<<f<<" hari"<<endl<<endl;
{ int h;
cout<<"-- ** -- Cara Menentukan Hari Kelahiran -- ** --"<<endl;
cout<<endl;
cout<<"--> Langkah Pertama"<<endl;
cout<<"01 Januari "<<thn<<" sampai dengan "<<tgl<<" "<<bln<<" "<<thn<<endl;
if (bln == 1)
cout<<tgl<<" Januari adalah hari ke- "<<tgl<<endl;
else
if (bln == 2)
{h=31+tgl;
cout<<tgl<<" Februari adalah hari ke- "<<h<<endl;
}
if (bln == 3)
{
h=31+f+tgl;
cout<<tgl<<" Maret adalah hari ke- "<<h<<endl;
}
else
if (bln == 4)
{
h=31+f+31+tgl;
cout<<tgl<<" April adalah hari ke- "<<h<<endl;
}
else
if (bln == 5)
{
h=31+f+31+30+tgl;
cout<<tgl<<" Mei adalah hari ke- "<<h<<endl;
}
else
if (bln == 6)
{
h=31+f+31+30+31+tgl;
cout<<tgl<<" Juni adalah hari ke- "<<h<<endl;
}
else
if (bln == 7)
{
h=31+f+31+30+31+30+tgl;
cout<<tgl<<" Juli adalah hari ke- "<<h<<endl;
}
else
if (bln == 8)
{
h=31+f+31+30+31+30+31+tgl;
cout<<tgl<<" Agustus adalah hari ke- "<<h<<endl;
}
else
if (bln == 9)
{
h=31+f+31+30+31+30+31+30+tgl;
cout<<tgl<<" September adalah hari ke- "<<h<<endl;
}
else
if (bln == 10)
{
h=31+f+31+30+31+30+31+30+31+tgl;
cout<<tgl<<" Oktober adalah hari ke- "<<h<<endl;
}
else
if (bln == 11)
{
h=31+f+31+30+31+30+31+30+31+30+tgl;
cout<<tgl<<" November adalah hari ke- "<<h<<endl;
}
else
if (bln == 12)
{
h=31+f+31+30+31+30+31+30+31+30+31+tgl;
cout<<tgl<<" Desember adalah hari ke- "<<h<<endl;
}
cout<<endl;
k=(thn-1)/4;
cout<<"--> Langkah Kedua "<<endl;
cout<<thn<<" - 1 = "<<(thn-1)<<endl;
cout<<"lalu "<<(thn-1)<<" dibagi 4 = "<<(thn-1)/4<<endl;
cout<<endl;
sisa=((thn+h)+k)%7;
cout<<"--> Langkah Ketiga"<<endl;
cout<<thn<<" + "<<h<<" = "<<(thn+h)<<endl;
cout<<"lalu ("<<(thn+h)<<" + "<<k<<") mod 7 sisanya "<<sisa<<endl;
cout<<endl;
cout<<"--> Hasil Akhirnya"<<endl;
cout<<"Jadi Hari Lahir Anda Adalah Hari ' ";
if (sisa==1) cout<<"Sabtu '";else
if (sisa==2) cout<<"Minggu '";else
if (sisa==3) cout<<"Senin '";else
if (sisa==4) cout<<"Selasa '";else
if (sisa==5) cout<<"Rabu '";else
if (sisa==6) cout<<"Kamis '";else
if (sisa==7) cout<<"Maka Sebaiknya Anda Belajar Berhitung Lagi Deh ^.^";else
if (sisa==0) cout<<"Jum'at '";
}
}
