#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    int N;
    string name;
    int score;
    cin >> N;
    vector<pair<string, int> > v;
    for(int i = 0; i < N; i++){
        cin >> name;
        cin >> score;
        v.push_back(make_pair(name, score));
    }

    for(int i = N - 1; i >= 0; i--){
        cout << v[i].first  << " ";
    }

    return 0;
}