#include <iostream>

using namespace std;

int matriksSp(int n){
int a[n][n], jum=0;
 for (int i=0; i<n; i++){
        for(int y=0; y<n; y++){
        cout << "masukan elemen matriks ["<<i<<","<<y<<"]: "; cin>> a[i][y];
            if (a[i][y]==0)
                jum++;}
                }
 cout<<endl;
 for (int i=0; i<n; i++){
        for(int y=0; y<n; y++){
        cout<<a[i][y]<<" ";}
        cout<<endl;
        }
if(jum>((n*n)/2)){
    cout<<"merupakan matriks sparse";}
else{
    cout<<"bukan merupakan matriks sparse";
}
cout<<endl;

}
int main()
{
    int x,y;

    cout<<"masukan ordo nxn:";cin>>x;
    y=matriksSp(2);
    cout<<y;
    return 0;
}
