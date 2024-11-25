def solution(cards):
    def dfs(start):
        visited[start] = True
        group_size = 1
        next_card = cards[start] - 1
        while not visited[next_card]:
            visited[next_card] = True
            group_size += 1
            next_card = cards[next_card] - 1
        return group_size

    n = len(cards)
    visited = [False] * n
    group_sizes = []

    for i in range(n):
        if not visited[i]:
            group_sizes.append(dfs(i))

    group_sizes.sort(reverse=True)

    if len(group_sizes) < 2:  # 그룹이 하나
        return 0
    return group_sizes[0] * group_sizes[1]
