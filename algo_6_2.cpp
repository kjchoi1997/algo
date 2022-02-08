#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool comp(int a, int b){
    return a > b;
}

int main(void){
    int N;
    int num;
    cin >> N;
    vector<int> list;
    for(int i = 0; i < N; i++){
        cin >> num;
        list.push_back(num);
    }
    sort(list.begin(), list.end(), comp);
    for(int i = 0; i < N; i++){
        cout << list[i] << " ";
    }
}