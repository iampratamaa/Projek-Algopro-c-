#include <iostream>
#include <iomanip>

using namespace std;
int msp(int n)
{
    int A[10][10], i, j, m = 0;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
        cout << "masukan elemen matriks ["<<i<<","<<j<<"]: "; cin >> A[i][j];
        if (A[i][j] == 0)
            m++;}
    }
     cout<<endl;
     cout << "Matriks : "<<endl;
 for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
        cout<<setw(4)<<A[i][j]<<" ";}
        cout<<endl;
        }
        cout<<endl;
    if (m > ((n * n) / 2)){
        cout << "Merupakan Matriks Sparse\n ";}
	else {
	    cout << "Bukan Merupakan Matriks Sparse\n ";}

}
int main()
{
    int o;
    cout<<"Masukan ordo Matriks (nxn):";cin>>o;
    cout<<msp(o);
    return 0;
}
