#include <iostream>

using namespace std;

int main()
{
    char huruf[]={'i','n','d','o','e','s','a','m','r','k'},h;
    cout << "Cek Huruf Pada Array"<<endl;
    cout << "Masukkan hurufya : ";
    cin >> h;
    /* for(int i = 0; i < 10; i++){
    	if(h == huruf[i]){
    		cout << "Indeks Karakter " << h << " : " << i << endl;
    	}
    	else {
    		cout << "Karakter Tidak Ada" << endl;
		}
	} */
    if (h==huruf[0]){cout << "Huruf Sama Pada Index Ke-0";}
    else if (h==huruf[1]){cout << "Huruf Sama Pada Index Ke-1";}
    else if (h==huruf[2]){cout << "Huruf Sama Pada Index Ke-2";}
    else if (h==huruf[3]){cout << "Huruf Sama Pada Index Ke-3";}
    else if (h==huruf[4]){cout << "Huruf Sama Pada Index Ke-4";}
    else if (h==huruf[5]){cout << "Huruf Sama Pada Index Ke-5";}
    else if (h==huruf[6]){cout << "Huruf Sama Pada Index Ke-6";}
    else if (h==huruf[7]){cout << "Huruf Sama Pada Index Ke-7";}
    else if (h==huruf[8]){cout << "Huruf Sama Pada Index Ke-8";}
    else if (h==huruf[9]){cout << "Huruf Sama Pada Index Ke-9";}
    else if (h!=huruf[0]){cout << "Tidak Ada Pada index";}
    else if (h!=huruf[1]){cout << "Tidak Ada Pada index";}
    else if (h!=huruf[2]){cout << "Tidak Ada Pada index";}
    else if (h!=huruf[3]){cout << "Tidak Ada Pada index";}
    else if (h!=huruf[4]){cout << "Tidak Ada Pada index";}
    else if (h!=huruf[5]){cout << "Tidak Ada Pada index";}
    else if (h!=huruf[6]){cout << "Tidak Ada Pada index";}
    else if (h!=huruf[7]){cout << "Tidak Ada Pada index";}
    else if (h!=huruf[8]){cout << "Tidak Ada Pada index";}
    else if (h!=huruf[9]){cout << "Tidak Ada Pada index";}
    return 0;
}
