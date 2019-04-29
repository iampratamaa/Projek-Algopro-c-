#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main() {
int N,i, nim[20], program[20], bahasa[20], kalkulus[20],rata[20],jumlah[20];;
char *grade[20];

cout<<"Masukkan jumlah data \t\t\t\t= ";
cin>>N;
for (i=0; i<N; i++)
{
    cout <<endl;
    cout<<"Data ke-"<<i+1<<endl;
    cout<<"Masukkan NIM Mahasiswa ke-"<<i+1<<"\t\t\t= ";
    cin>>nim[i];
    cout<<"Masukkan Nilai Kalkulus Mahasiswa ke-"<<i+1<<"\t\t= ";
    cin>>kalkulus[i];
    cout<<"Masukkan Nilai Pemrograman Mahasiswa ke-"<<i+1<<"\t= ";
    cin>>program[i];
    cout<<"Masukkan Nilai Jaringan Mahasiswa ke-"<<i+1<<"\t\t= ";
    cin>>bahasa[i];
jumlah[i]=kalkulus[i]+program[i]+bahasa[i];
rata[i]=jumlah[i]/3;
if((rata[i]>=85)&&(rata[i]<=100)){
grade[i]="A";
}else if((rata[i]>=75)&&(rata[i]<=84)){
grade[i]="B";
}else if((rata[i]>=65)&&(rata[i]<=74)){
grade[i]="C";
}else if((rata[i]>=55)&&(rata[i]<=64)){
grade[i]="D";
}else if ((rata[i]>0)&&(rata[i]<=55)){
grade[i]="E";
}else{grade[i]="EROR";
}
}
cout << endl;
cout<<"========================================================================================================================"<<endl;
cout<<"=                                                 TABEL DATA MAHASISWA                                                 ="<<endl;
cout<<"========================================================================================================================"<<endl;
cout<<"="<<setw(8)<<"NIM"<<setw(6)<<"|"<<setw(15)<<"KALKULUS"<<setw(8)<<"|"<<setw(18)<<"PEMROGRAMAN"<<setw(8)<<"|"<<setw(13)<<"       BAHASA       |       RATA-RATA       |  GRADE   ="<<endl;
cout<<"========================================================================================================================"<<endl;
for (i=0; i<N; i++)
{
    cout<<"="<<setw(8)<<nim[i]<<setw(21)<<kalkulus[i]<<setw(26)<<program[i]<<setw(21)<<bahasa[i]<<setw(24)<< rata[i]<<setw(15)<<grade[i]<<"   ="<<endl;
}
cout<<"========================================================================================================================"<<endl;
 getch();
return 0;
}

