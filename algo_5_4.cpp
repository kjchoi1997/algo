#include <iostream>
#include <string>

using namespace std;

int N, M;
int cnt = 0;
int map[201][201];
int visited[201][201] = {0, };

void run(int x, int y){
    if(map[x][y] == 1){
        cnt++;
    }
}

int main(void){
    cin >> N >> M;
    string str;

    for(int i = 1; i <= N; i++){
        cin >> str;
        for(int j = 1; j <= M; j++){
            map[i][j] >> str[j];
        }
    }

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= M; j++){
            run(i, j);
        }
    }
    return 0;
}