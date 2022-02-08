#include <iostream>
#include <string>

using namespace std;
int ice[1001][1001];
int N, M;

int checkzero(int x, int y){
    if(x < 0 || x >= N || y < 0 || y >= M){
        return 0;
    }
    if(ice[x][y] == 0){
        ice[x][y] = 1;
        checkzero(x + 1, y);
        checkzero(x - 1, y);
        checkzero(x, y + 1);
        checkzero(x, y - 1);
        return 1;
    }
    return 0;
}

int main(void){
    cin >> N >> M;

    int cnt = 0;
    string str;

    for(int i = 0; i < N; i++){
        cin >> str;
        for(int j = 0; j < M; j++){
            ice[i][j] = str[j] - '0';
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(checkzero(i, j) == 1){
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}