#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
vector<int> dduk;

int main(void){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> N >> M;

    for(int i = 0; i < N; i++){
        int x;
        cin >> x;
        dduk.push_back(x);
    }
    int result = 0;
    int start = 0;
    int end = 1e9;
    while(start <= end){
        int mid = (start + end) / 2;
        long long int sum = 0;
        for(int i = 0; i < N; i++){
            if(dduk[i] > mid){
                sum += dduk[i] - mid;
            }
        }
        if(sum < M){
            end = mid - 1;
        }
        else{
            result = mid;
            start = mid + 1;
        }
    }

    cout << result;
}