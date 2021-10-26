#include<iostream>
using namespace std;
void main() {
	int n;
	cout << "enter number:";
	cin >> n;
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0)
			cout << "*";
		else
			cout << "#";
	}
}