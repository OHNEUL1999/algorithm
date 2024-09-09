#include <iostream>
#include <vector>
using namespace std;

const int dx[4] = {-1, 1, 0, 0};
const int dy[4] = {0, 0, 1, -1};

void dfs(int x, int y, char color, const vector<vector<char>>& grid, vector<vector<bool>>& visited) {
    int n = grid.size();
    visited[x][y] = true;
    
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (nx >= 0 && nx < n && ny >= 0 && ny < n && !visited[nx][ny] && grid[nx][ny] == color) {
            dfs(nx, ny, color, grid, visited);
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<vector<char>> grid(n, vector<char>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    // 사람의 경우
    vector<vector<bool>> visited_human(n, vector<bool>(n, false));
    int human_regions = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited_human[i][j]) {
                dfs(i, j, grid[i][j], grid, visited_human);
                human_regions++;
            }
        }
    }

    // 소의 경우
    vector<vector<char>> cow_grid = grid;
    vector<vector<bool>> visited_cow(n, vector<bool>(n, false));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (cow_grid[i][j] == 'R') {
                cow_grid[i][j] = 'G';
            }
        }
    }
    
    int cow_regions = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited_cow[i][j]) {
                dfs(i, j, cow_grid[i][j], cow_grid, visited_cow);
                cow_regions++;
            }
        }
    }

    cout << human_regions << " " << cow_regions << endl;
    
    return 0;
}
