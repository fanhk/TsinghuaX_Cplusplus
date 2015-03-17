#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int max, min;
	int sum = 0;
	int x;
	cin >> x;
	max = min = x;
	sum += x;
	while (n > 1) {
		cin >> x;
		sum += x;
		if (max < x) {
			max = x;
		}
		if (x < min) {
			min = x;
		}
		n--;
	}
	cout << sum << ' ' << min << ' ' << max << endl;
	return 0;
}