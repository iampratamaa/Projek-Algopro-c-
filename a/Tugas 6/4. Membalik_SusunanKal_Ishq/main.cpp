#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

int main(){
    int i,n;
    char kalimat[100];

    cout<<"Masukan Sebuah Kalimat \t: ";
    cin.getline (kalimat, 100);
    cout<<"Terbalik   : ";
    n=strlen(kalimat);
    for(i=n-1; i>=0; i--)
        {
            cout<<kalimat[i];

        }

}
