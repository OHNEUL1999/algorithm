import sys
sys.setrecursionlimit(10000)  # 재귀 깊이 제한을 10000으로 증가

dx = [-1, 1, 0, 0]
dy = [0, 0, 1, -1]

def dfs(x, y, color, grid, visited):
    visited[x][y] = True
    n = len(grid)
    
    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]
        if 0 <= nx < n and 0 <= ny < n and not visited[nx][ny]:
            if grid[nx][ny] == color:
                dfs(nx, ny, color, grid, visited)

n = int(input())
grid = [list(input().strip()) for _ in range(n)]

visited_human = [[False] * n for _ in range(n)]
visited_cow = [[False] * n for _ in range(n)]

# 사람의 경우
human_regions = 0
for i in range(n):
    for j in range(n):
        if not visited_human[i][j]:
            dfs(i, j, grid[i][j], grid, visited_human)
            human_regions += 1

# 소의 경우 (grid 복사본 생성)
cow_grid = [row[:] for row in grid]
for i in range(n):
    for j in range(n):
        if cow_grid[i][j] == 'R':
            cow_grid[i][j] = 'G'

cow_regions = 0
for i in range(n):
    for j in range(n):
        if not visited_cow[i][j]:
            dfs(i, j, cow_grid[i][j], cow_grid, visited_cow)
            cow_regions += 1
            
print(human_regions, cow_regions)
