#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int l;
    cout << "Masukan Nilai N :" ;
    cin >> l;
    for (int i=1;i<=l;i++){
        for (int j=1;j<=i;j++){
        if (i+j<=(l+1)){
            cout << "*";
        }
            else{
                cout <<" ";
            }


    }
    cout <<endl;
    }
    getch();
}
