#include <iostream>
using namespace std;

int main() {
	int i, j, k, n, bil1, bil2, temp;
	
	cout << "Masukkan Baris = "; cin >> n;
	bil1 = 1;
	bil2 = 1;
	
	for(j = 1; j <= n; j++) {
		for(i = 1; i <= j; i++) {
			temp = bil1;
			bil1 = bil2;
			bil2 = temp + bil1;
			cout << temp << " ";
		}
		cout << endl;
	}
	
	return 0;
}
