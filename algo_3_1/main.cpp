#include <iostream>

using namespace std;

int main(void) {
	int money;
	int won[4] = { 500, 100, 50, 10 };
	int count = 0;
	int temp;

	cin >> money;
	for (int i = 0; i < 4; i++) {
		if ((temp = money / won[i]) != 0) {
			count += temp;
			money -= temp * won[i];
		}
	}
	cout << count;

}