#include <iostream>

using namespace std;

int a[3][3];
int det1(int x){
x=a[1][1]*a[2][2]-a[1][2]*a[2][1];}
int det2(int m){
m=a[1][0]*a[2][2]-a[1][2]*a[2][0];}
int det3(int n){
n=a[1][0]*a[2][1]-a[1][1]*a[2][0];}

int main()
{
    a[0][0]=3;a[0][1]=5;a[0][2]=7;a[1][0]=4;a[1][1]=2;a[1][2]=9;
    a[2][0]=1;a[2][1]=6;a[2][2]=0;
    int detTotal,t,y,o;
    for(int i=0; i<3; i++){
        for(int y=0; y<3; y++){
            cout<<a[i][y]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"determinan pertama: "<< det1(t)<<endl;
    cout<<"determinan kedua: "<< det2(y)<<endl;
    cout<<"determinan ketiga: "<< det3(o)<<endl;
    detTotal=a[0][0]*det1(t)-a[0][1]*det2(y)+a[0][2]*det3(o);
    cout<<a[0][0]<<"x"<<det1(t)<<"-"<<a[0][1]<<"x"<<det2(y)<<"+"<<a[0][2]<<"x"<<det3(o)<<"="<<detTotal;



    return 0;
}
