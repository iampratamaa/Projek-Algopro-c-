#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

int a[3][3];
int det1(int b){
b=a[1][1]*a[2][2]-a[1][2]*a[2][1];}
int det2(int c){
c=a[1][0]*a[2][2]-a[1][2]*a[2][0];}
int det3(int d){
d=a[1][0]*a[2][1]-a[1][1]*a[2][0];}

int main()
{
    srand(0);
    int detA,e,f,g;
    cout << "Determinan Dari Matriks :"<<endl;
    for (int i=0; i<3; i++){
    for(int y=0; y<3; y++){
    a[i][y]=rand()%10;
    cout<<setw(4)<<a[i][y];}
    cout<<endl;}
    cout<<endl;
    cout<<"Determinan Pertama\t: "<<"("<<a[1][1]<<" x "<<a[2][2]<<")"<<" - "<<"("<<a[1][2]<<" x "<<a[2][1]<<")"<<" = "<<det1(e)<<endl;
    cout<<"Determinan Kedua\t: "<<"("<<a[1][0]<<" x "<<a[2][2]<<")"<<" - "<<"("<<a[1][2]<<" x "<<a[2][0]<<")"<<" = "<<det2(f)<<endl;
    cout<<"Determinan Ketiga\t: "<<"("<<a[1][0]<<" x "<<a[2][1]<<")"<<" - "<<"("<<a[1][1]<<" x "<<a[2][0]<<")"<<" = "<< det3(g)<<endl;
    detA=a[0][0]*det1(e)-a[0][1]*det2(f)+a[0][2]*det3(g);
    cout<<"Jadi det(A)\t\t: "<<"("<<a[0][0]<<" x "<<det1(e)<<")"<<" - "<<"("<<a[0][1]<<" x "<<det2(f)<<")"<<" + "<<"("<<a[0][2]<<" x "<<det3(g)<<")"<<"= "<<detA;
    return 0;
}
