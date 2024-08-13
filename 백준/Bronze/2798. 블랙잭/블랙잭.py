# 블랙잭

# 카드의 개수, 넘지않을숫자M
N, M = map(int, input().split())
lst = list(map(int, input().split()))
sum = 0

# 조합
for i in range(N-2):
    for j in range(i+1, N-1):
        for k in range(j+1, N):
            if sum < lst[i] + lst[j] + lst[k] <= M:
                sum = lst[i] + lst[j] + lst[k]

print(sum)