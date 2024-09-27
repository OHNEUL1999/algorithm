def factorial(n):
    tmp = 1
    for i in range(2, n + 1):
        tmp *= i
    return tmp


def combination(n, m):
    tmp = factorial(n) // (factorial(m) * factorial(n - m))
    return tmp


n, m = map(int, input().split())
print(combination(n, m))