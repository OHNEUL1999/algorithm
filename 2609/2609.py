a, b = map(int, input().split())

def gcd(a, b):
    if a == 0:
        return b
    else:
        return gcd(b%a, a)

def lcm(a, b):
    return (a*b)//gcd(a, b)

print(gcd(a, b))
print(lcm(a, b))