a, b, n = map(int,input().split())
ans = 0

for i in range(0, n):
    a *= 10
    ans = int(a/b)
    a %= b

print(int(ans))