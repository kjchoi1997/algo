#include <iostream>

using namespace std;

int main(void) {
	int N;
	int num = 0;
	cin >> N;
	for (int i = 0; i < N + 1; i++) {
		for (int j = 0; j < 60; j++) {
			for (int k = 0; k < 60; k++) {
				if (i % 10 == 3 || j % 10 == 0 || j / 10 == 3 || k % 10 == 0 || k / 10 == 3) {
					num++;
				}
			}
		}
	}
	cout << num;
}