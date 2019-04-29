#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char kalimat[100];
	int i, j, mulai= 0;

	cout <<"Masukan Sebuah Kalimat \t: ";
	cin.getline (kalimat,100);

	cout << "Hasil = ";
	for (i = 0; i < strlen(kalimat); i++){
		if(kalimat[i]==' '){
			for (j = i-1; j >= mulai; j--){
				cout << kalimat[j];
			}
			cout << kalimat[i];
			mulai = i+1;
		}
		else if (i == (strlen(kalimat)-1)) {
			for (j = i; j >= mulai; j--){
				cout << kalimat[j];
			}
		}
	}

	return 0;
}
