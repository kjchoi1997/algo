#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> arr;
int N, M;
int result;

int binarySearch(vector<int> &arr, int x, int start, int end){
    if(start > end){
        return -1;
    }
    int mid = (start + end) / 2;
    if(arr[mid] == x){
        return 1;
    }
    else if(arr[mid] > x){
        return binarySearch(arr, x, start, mid - 1);
    }
    else{
        return binarySearch(arr, x, mid + 1, end);
    }
}

int main(void){

    cin >> N;
    for(int i = 0; i < N; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    
    sort(arr.begin(), arr.end());

    cin >> M;
    for(int i = 0; i < M; i++){
        int x;
        cin >> x;
        result = binarySearch(arr, x, 0, N - 1);
        if(result == -1){
            cout << "no ";
        }
        else{
            cout << "yes ";
        }
    }


    return 0;
}