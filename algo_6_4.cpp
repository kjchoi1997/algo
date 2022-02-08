#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(int a, int b){
    return a > b;
}

int main(void){
    int N, K;
    int num_A;
    int num_B;
    int temp;
    cin >> N >> K;
    vector<int> A, B;
    for(int i = 0; i < N; i++){
        cin >> num_A;
        A.push_back(num_A);
    }

    for(int i = 0; i < N; i++){
        cin >> num_B;
        B.push_back(num_B);
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), comp);

    for(int i = 0; i < K; i++){
        if(A[i] < B[i]){
            temp = A[i];
            A[i] = B[i];
            B[i] = temp;
        }
        else{
            break;
        }
    }

    int sum = 0;
    for(int i = 0; i < N; i++){
        sum += A[i];
    }
    cout << sum;

    return 0;
}