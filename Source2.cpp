#include<iostream>
using namespace std;
int main() {
	int n,x,f=1;
	cout << "enter number:";
	cin >> n;
	int* p = new int[n];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		x = rand();
		int j = 0;
		while (f==1 && j<i) {
				if (x == p[j]) {
					i--;
					f = 0;
				}
				j++;
			}
		if (f == 1)
			p[i] = x;
		}
	for (int m = 0; m < n; m++)
		cout << p[m] << '\t';
}