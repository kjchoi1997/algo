#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, target;
int result;
vector<int> arr;

int binarySearch(vector<int> &arr, int target, int start, int end){
    while(start >= end){
        int mid = (start + end) / 2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
}

int main(void){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> N >> target;
    for(int i = 0; i < N; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());
    result = binarySearch(arr, target, 0, N - 1);


    return 0;
}