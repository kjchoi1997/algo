#include <iostream>

using namespace std;
int map[50][50];
int d[50][50] = {0, };

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};


int main(void){
    int N, M;
    int row, col, direct;
    int cnt = 0;
    int turntime = 0;
    cin >> N >> M;
    cin >> row >> col >> direct;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> map[i][j];
        }
    }

    d[row][col] = 1;
    cnt = 1;
    if(map[row][col] == 1){
        cnt = 0;
    }
    else if(map[row][col] == 0){
        while(true){
            //turn left
            direct -= 1;
            if(direct == -1){
                direct = 3;
            }
            int nrow = row + dx[direct];
            int ncol = col + dy[direct];
            if(d[nrow][ncol] == 0 && map[nrow][ncol] == 0){
                d[nrow][ncol] = 1;
                row = nrow;
                col = ncol;
                cnt++;
                turntime = 0;
                continue;
            }
            else
                turntime++;
            if(turntime == 4){
                nrow = row - dx[direct];
                ncol = col + dy[direct];
                if(map[nrow][ncol] == 0){
                    row = nrow;
                    col = ncol;
                }
                else
                    break;
                turntime = 0;
            }

        }
    }

    cout << cnt;

    return 0;
}