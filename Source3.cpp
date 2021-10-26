#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "enter number:";
	cin >> n;
	int* p = new int[n];
	cout << "enter numbers:\n";
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	int j = 1,x=1;
	while (x == 1 && j<n) {
			if (p[j] < p[j - 1]) {
				x = 0;
			}
			j++;
	}
	if (x == 1)
		cout << "moratab";
    if (x == 0)
		cout << "na moratab";

}