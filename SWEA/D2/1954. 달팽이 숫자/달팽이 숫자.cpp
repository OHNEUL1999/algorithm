#include <iostream>
#include <vector>

using namespace std;

int dx[] = {0, 1, 0, -1}; // 우, 하, 좌, 상
int dy[] = {1, 0, -1, 0};

void printSnail(int N, int t) {
    vector<vector<int>> snail(N, vector<int>(N, 0));
    int x = 0, y = 0, dir = 0;
    for (int i = 1; i <= N * N; i++) {
        snail[x][y] = i;
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (nx < 0 || nx >= N || ny < 0 || ny >= N || snail[nx][ny] != 0) {
            dir = (dir + 1) % 4;
            nx = x + dx[dir];
            ny = y + dy[dir];
        }

        x = nx;
        y = ny;
    }

    cout << "#" << t << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << snail[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        int N;
        cin >> N;
        printSnail(N, t);
    }
    return 0;
}
