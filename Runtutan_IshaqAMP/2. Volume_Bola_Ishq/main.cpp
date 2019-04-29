#include <iostream>
using namespace std;

int main()
{
    float volume,r,phi=3.14;
    cout<<"Program Volume Bola"<<endl;
    cout<<"Masukkan Jari-jari Bola : ";
    cin>>r;
    volume=phi*r*r*r*4/3;
    cout<<endl<<"Volume Bola = "<<volume<<"cm"<<endl;
    return 0;
}
