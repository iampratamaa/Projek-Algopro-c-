#include <iostream>
using namespace std;

int main() {
	int i, j;
	
	for(i = 20; i >= 1; i--)
	if (i % 2 == 1) {
		for(j = 1; j <= i; j++) 
		if (j % 2 == 1) {
			cout << j << " ";
		}
		cout << endl;
	}
	
	return 0;
}
