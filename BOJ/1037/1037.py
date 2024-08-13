N = int(input())

lst = list(map(int, input().split()))

ans = max(lst) * min(lst)
print(ans)