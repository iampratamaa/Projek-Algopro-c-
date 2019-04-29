#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
   {
        int A[3][3],B[3][3],C[3][3],i,j,k;
       //masukkan matrix A
       cout<<"Silahkan input matrik A : \n";
       cout<<"------------------------- \n";
       for(i=0;i<4;i++)
       {
            for(j=0;j<4;j++)
            {
             cout<<"Elemen ke "<<(i+1)<<","<<(j+1)<<" : ";
             cin>>A[i][j];
            }
       }
       //cetak matrix A
       cout<<"\nMatrik A : \n";;
       for(i=0;i<4;i++)

       {
            for(j=0;j<4;j++)
            {
            cout<<setw(4)<<A[i][j];
            }
            cout<<endl;
       }
       cout<<endl;
       //masukkan matriks B
       cout<<"Silahkan input matrik B : \n";
       cout<<"------------------------- \n";
       for(i=0;i<4;i++)
       {
        for(j=0;j<4;j++)
            {
            cout<<"Elemen ke "<<(i+1)<<","<<(j+1)<<" : ";
          cin>>B[i][j];
            }
       }
       //cetak matrix B
       cout<<"\nMatrik B : \n";
       for(i=0;i<4;i++)
       {
            for(j=0;j<4;j++)
            {
            cout<<setw(4)<<B[i][j];
            }
            cout<<endl;
       }
        //Operasi Perkalian
      for (i=0;i<4;i++)
      {
        for (j=0;j<4;j++)
        {
        C[i][j]=0;
            for (k=0;k<4;k++)
          {
            C[i][j]+= A[i][k]*B[k][j];
          }
        }
      }
      //Menampilkan hasil
      cout<<"\nMatrik C, Hasil : \n";
      for(i=0;i<4;i++)
      {
        for(j=0;j<4;j++)
        {
            cout<<setw(4)<<C[i][j];
        }
        cout<<endl;
      }
        cout<<endl;
        getch();
    }
