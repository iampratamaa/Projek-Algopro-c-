#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
using namespace std;

main () {
int pil,bts,i, t, r,s, cari, a,e,m, hapus,flag=0,b=0;
char barang[100],cek;
char jwb;
menu:
cout<<endl;
cout<<"Selamat Datang"<<endl;
cout<<"Ini Adalah Program Inventori Barang"<<endl;
cout<<"TOKO BLA BLA BLA"<<endl;
cout<<"=============================="<<endl;
cout<<endl;
cout<<"Silakan Pilih Menu"<<endl;
cout<<"1. INSERT DATA"<<endl;
cout<<"2. UPDATE DATA"<<endl;
cout<<"3. TRAVERSE DATA"<<endl;
cout<<"4. DELETE DATA"<<endl;
cout<<"5. SEARCH DATA"<<endl;
cout<<"6. Keluar"<<endl;
cout<<endl;
cout<<"Masukan pilihan : ";cin>>pil;
if (pil==1)
 { system("cls");
    cout<<"MENU INPUT BARANG"<<endl;
    cout<<endl;
    cout<<"Masukan jumlah Barang yang ingin diinputkan : ";cin>>bts;
      cout<<endl;
      cout<<"INPUTKAN DATA BARANG:"<<endl;
      cout<<"----------------------"<<endl;
      //menginputkan data
    for (i=0; i<bts; i++)
       {cout<<"Data Barang "<<(i+1)<<" : ";cin>>barang[i];
         //cout<<"Nama Barang\t: ";
        // cout<<"-------------------"<<endl;
        }
        system("cls");
         cout<<"Data Sudah di inputkan..:"<<endl;
         cout<<endl;
          cout<<"Kembali? [y/t] : ";cin>>jwb;
             if (jwb=='y'||jwb=='Y')
                {system("cls");
                  goto menu;}
      }
//pilihan 2 (Menampilkan Data Barang)
else if (pil==2)
 {
      system("cls");
      for (i=hapus-1;i<5-1;i++)
            { barang[i]=barang[i+1];}
            for (i=0; i<bts; i++)
       {
         cout<<"Data Barang "<<(i+1)<<" : "<<barang[i]<<endl;
         }
         cout<<endl;
            cout<<"Kembali? [y/t] : ";cin>>jwb;
             if (jwb=='y'||jwb=='Y')
                {system("cls");
                  goto menu;
                  }
   }
   else if (pil==3)
 {
      system("cls");
            for (i=0; i<bts; i++)
       {
         cout<<endl;

         cout<<endl;
         }
         cout<<endl;
            cout<<"Kembali? [y/t] : ";cin>>jwb;
             if (jwb=='y'||jwb=='Y')
                {system("cls");
                  goto menu;
                  }
   }
   else if (pil==4)
 {
      system("cls");
            for (i=0; i<bts; i++)
       {
         cout<<endl;
         cout<<"Data yang lama\n"<<endl;
         for (i=0; i<bts; i++)
       {
         cout<<"Data Barang "<<(i+1)<<" : "<<barang[i]<<endl;
         }
         cout<<" data yang ingin dihapus : ";
            cin>> hapus;
            cout<<"\nData yang baru : \n";

         cout<<endl;
         }
         cout<<endl;
            cout<<"Kembali? [y/t] : ";cin>>jwb;
             if (jwb=='y'||jwb=='Y')
                {system("cls");
                  goto menu;
                  }
   }
   else if (pil==5)
 {
      system("cls");
         cout << "Masukkan Data Yang Mau Dicari:";cin>>cek;
         for (i=0; i<bts; i++)
       {
           if(cek==barang[i]){
         flag=cek;
         b=i;
         }
         }
            if(cek==flag){
cout << "\n\nNilai yang Anda cari ADA";
}else{
cout << "Nilai yang Anda cari TIDAK ADA";
}

         cout<<endl;
            cout<<"Kembali? [y/t] : ";cin>>jwb;
             if (jwb=='y'||jwb=='Y')
                {system("cls");
                  goto menu;
                  }

 }
   else if (pil==6)
 {
      exit(0);
   }
   else {cout<<"Pilihan tidak ada";}
}
