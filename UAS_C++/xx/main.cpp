#include <iostream>
using namespace std;

int HitungIPK (char x, int y);

int main()
{
       int jumlahMK, jumlahMhs, jumlahsks, a,b,c;
       float ip_plus,ipp, ippp;
       char hitunglagi;
       jumlahsks=0;
       ippp=0;

       struct mahasiswa
       {
              char nama[25];
              int nim;
              float ipk;
       };

       struct matakuliah
       {
              int kodeMK;
              char namaMK[25];
              char nilai;
              int sks;
       };

       mahasiswa mhs;
       matakuliah makul;


                jumlahMK=5;
              for(b=0; b<jumlahMK; b++)
              {
                     cout<<"Masukkan nilai MATKUL ke-"<<b+1<<" : ";
                     cin>>makul.nilai;

                     jumlahsks=3*jumlahMK;
                     ipp= HitungIPK(makul.nilai, 3);
                     ippp+=ipp;

              }
              mhs.ipk = ippp/jumlahsks;
              cout<<"=================================================== \n";
              cout<<"Jumlah Nilai\t\t :"<<ippp<<endl;
              cout<<"Jumlah SKS \t\t :"<<jumlahsks<<endl;
              cout<<"Indeks Prestasi \t :"<<mhs.ipk<<endl<<endl;

       return 0;
}

       int HitungIPK (char x, int y)
{
       int ip;
       switch(x)
       {
       case 'A':
              ip=4*y;
              break;
       case 'B':
                     ip=3*y;
                     break;
       case 'C':
                     ip=2*y;
                     break;
       case 'D':
                     ip=1*y;
                     break;
       case 'E':
                     ip=0*y;
                     break;
       default:
              ip=0;
              break;
       }
       return ip;
}
