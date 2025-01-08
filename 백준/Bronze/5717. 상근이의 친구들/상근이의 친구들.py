import sys
input = sys.stdin.read

def main():
    data = input().strip().split('\n')
    for line in data:
        L, R = map(int, line.split())
        if L == 0 and R == 0:
            break
        print(L + R)

main()
