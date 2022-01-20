#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main(void) {
	int row = 1;
	int col = 1;
	int num;
	string dir;
	vector<string> words;

	cin >> num;
	cin.ignore();
	getline(cin, dir);
	stringstream sstream(dir);

	while (getline(sstream, dir, ' '))
	{
		words.push_back(dir);
	}

	for (int i = 0; i < words.size(); i++) {
		if (words[i] == "R") {
			if(col >= num)
				continue;
			col++;
		}
		else if (words[i] == "L") {
			if(col <= 1)
				continue;
			col--;
		}
		else if (words[i] == "U") {
			if(row <= 1)
				continue;
			row--;
		}
		else if (words[i] == "D") {
			if(row >= num)
				continue;
			row++;
		}
	}
	cout << row << " " << col;
}