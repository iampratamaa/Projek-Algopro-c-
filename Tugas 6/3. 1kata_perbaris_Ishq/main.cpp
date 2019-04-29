#include<iostream>
#include<stdio.h>
#include<ctype.h>
using namespace std;
int main()
{
      char kalimat[100];
      int i, spasi=0;

      cout << "Masukan Sebuah Kalimat \t: ";
      cin.getline(kalimat, sizeof(kalimat));
      cout << "\t\t\t  ";


      for(i=0; kalimat[i]; i++)
      {
            if(isspace (kalimat[i]))
            {
                  spasi++;
                  cout << endl;
                  cout << "\t\t\t ";
            }
            cout << kalimat[i];

      }

      getchar();
}
