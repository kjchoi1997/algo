#include <iostream>

using namespace std;

int main(void) {
	int N, K;
	int cnt = 0;

	cin >> N >> K;

	while (true) {
		if (N % K != 0) {
			N--;
		}
		else {
			N /= K;
		}
		if (N == 1) {
			cnt++;
			break;
		}
		cnt++;
	}
	cout << cnt;
}