#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i, j;
	for (i = 1; i <= n; i++) {
		for (j = 0; j < n - i; j++) {
			cout << " ";
		}
		for (j = 0; j < 2 * i - 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	for (i = n - 1; i >= 1; i--) {
		for (j = 0; j < n - i; j++) {
			cout << " ";
		}
		for (j = 0; j < 2 * i - 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}