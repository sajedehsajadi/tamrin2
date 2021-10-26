//hang man game
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main() {
	string fruits[3] = { "banana","melon","cucumber" };
	string animals[3] = { "bear","monkey","donkey" };
	string colors[3] = { "yellow","blue","red" };
	string cs;
	int n, c = 1;
	int random;
	cout << "start game...\n";
	cout << "1)fruit or 2)animal or 3)color?\n";
	cin >> n;
	int a = 0, b = 2, x=1;
	srand(time(0));
	random = rand() % (b - a + 1) + a;
	switch (n) {
	case 1:
		cs = fruits[random];
		x = cs.size();
		break;
	case 2:
		cs = animals[random];
		x = cs.size();
		break;
	case 3:
		cs = colors[random];
		x = cs.size();
		break;
	default:
		cout << "error";
		cs = "error";
		break;
	}
	if (cs != "error") {
		char* p;
		p = new char[x];
		for (int i = 0; i < x; i++)
			cout << " _ ";
		int k = 0, f = 0, g = 0;
		int u = 2 * x;
		for (int h = 0; h < x; h++)
			p[h] = 0;
		while (g != x && c != 0) {
			if (k < 2 * x) {
				char ul;
				cout << "\n\nfaghat " << u << " forsat baraye hads zadan darid :D\n";
				u--;
				cout << "\nenter letter:";
				cin >> ul;
				for (int j = 0; j < x; j++) {
					if (ul == cs[j] || ul == toupper(cs[j]))
					{
						p[j] = ul;
						g++;
					}
				}
				for (int z = 0; z < x; z++) {
					if (p[z] != 0)
						cout << " " << p[z] << " ";
					if (p[z] == 0)
						cout << " _ ";
				}
				k++;
				if (k == 2 * x)
					c = 0;
			}
		}
		if (g == x)
			cout << "\neyval :D";
		if (c == 0) {
			cout << "\nbakhti:(";
			cout << "\nkalame:" << cs;
		}
	}
}