#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int data,i,nim[100],kalkulus[100],pemrograman[100],bahasa[100],rata[100],jumlah[100];
    char *grade[100];
    cout << "Masukkan Banyaknya Mahasiswa = ";
    cin >> data;cout << "=============================================="<<endl;
    for (i=0; i<data; i++)
    {
        cout << "Masukkan NIM Mahasiswa ke-"<<i+1<< " = ";
        cin >> nim[i];
        cout << "Masukkan Nilai Kalkulus Mahasiswa ke-"<<i+1<< " = ";
        cin >> kalkulus[i];
        cout << "Masukkan Nilai Pemrograman Mahasiswa ke-"<<i+1<< " = ";
        cin >> pemrograman[i];
        cout << "Masukkan Nilai Bahasa Mahasiswa ke-"<<i+1<< " = ";
        cin >> bahasa[i];
        cout << "=============================================="<<endl;
        jumlah[i]=kalkulus[i]+pemrograman[i]+bahasa[i];
        rata[i]=jumlah[i]/3;
if(rata[i]>=85){
grade[i]="A";
}else if((rata[i]>75)&&(rata[i]<85)){
grade[i]="B";
}else if((rata[i]>66)&&(rata[i]<75)){
grade[i]="C";
}else if((rata[i]>56)&&(rata[i]<65)){
grade[i]="D";
}else if ((rata[i]>0)&&(rata[i]<55)){
grade[i]="E";
    }


}
    cout << endl;
cout<<"=============================================================="<<endl;
cout<<"                     TABEL DATA MAHASISWA                    ="<<endl;
cout<<"=============================================================="<<endl;
cout<<"NIM  KALKULUS    PEMROGRAMAN   BAHASA    RATA-RATA   GRADE   ="<<endl;
cout<<"=============================================================="<<endl;
for (i=0; i<data; i++)
{
    cout<<nim[i]<<"\t"<<kalkulus[i]<<"\t     "<<pemrograman[i]<<"\t\t "<<bahasa[i]<<"\t    "<< rata[i]<<"\t\t"<<grade[i]<<"    ="<<endl;
}
cout<<"=============================================================="<<endl;
    getch();
    return 0;
}
