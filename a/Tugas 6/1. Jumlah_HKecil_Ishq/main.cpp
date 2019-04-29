#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int p,jumlah[26]={0},indeks =0;
	char kalimat[100],karakter;

	cout<<"Masukan Sebuah Kalimat \t: ";
    cin.getline (kalimat, 100);
	p = strlen(kalimat);
	for (karakter = 'a'; karakter <= 'z'; karakter++)
	{
		for (int i=0; i<=p; i++)
		{
			if(kalimat[i] == karakter)
			{
				jumlah[indeks]++;
			}
		}
		indeks++;
	}
	indeks=0;
	for (karakter='a'; karakter <= 'z'; karakter++)
	{
		if(jumlah[indeks]>0)
		{
			cout <<karakter << " = " << jumlah [indeks] << " ";
		}
		indeks++;
	}
	return 0;
}
