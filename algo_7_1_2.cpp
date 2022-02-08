#include <iostream>
#include <vector>
using namespace std;

int N, target;
vector<int> arr;

int binarySearch(vector<int>& arr, int target, int start, int end){
    if(start > end)
        return -1;
    int mid = (start + end) / 2;
    if(arr[mid] == target)
        return mid;
    else if(arr[mid] > target)
        return binarySearch(arr, target, start, mid - 1);
    else
        return binarySearch(arr, target, mid + 1, end);
}

int main(void){
    cin.tie(NULL); cout.tie(NULL); ios::sync_with_stdio(false);
    cin >> N >> target;

    for(int i = 0; i < N; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    int result = binarySearch(arr, target, 0, N - 1);
    if(result == -1){
        cout << "존재하지않아요/n";
    }
    else{
        cout << result + 1 << "\n";
    }

    return 0;
}