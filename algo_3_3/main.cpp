#include <iostream>
#include <algorithm>

using namespace std;

bool comp(int a, int b) {
	return a > b;
}

int main(void) {
	int row, col;
	int* arr;
	int *result;
	int temp;

	cin >> row >> col;

	result = new int[row];
	arr = new int[col];


	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> arr[j];
		}
		sort(arr, arr + col);
		result[i] = arr[0];
	}
	sort(result, result + row);
	cout << result[row - 1];
}