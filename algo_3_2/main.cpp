#include <iostream>

using namespace std;

int main(void) {
	int cnt;
	int plus;
	int limit;
	int* num;
	int temp;
	int last_num;
	int anot_num;
	int result;

	cin >> cnt >> plus >> limit;

	num = new int[cnt];
	for (int i = 0; i < cnt; i++) {
		cin >> num[i];
	}

	for (int i = 0; i < cnt; i++) {
		for (int j = i; j < cnt; j++) {
			if (num[i] > num[j]) {
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}

	last_num = plus / (limit + 1);
	anot_num = last_num;
	last_num = 3 * last_num;
	last_num += plus % (limit + 1);

	result = last_num * num[cnt - 1] + anot_num * num[cnt - 2];

	cout << result;
	
}