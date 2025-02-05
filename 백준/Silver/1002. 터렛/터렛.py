import math

def turret_solution(x1, y1, r1, x2, y2, r2):
    distance = math.dist((x1, y1), (x2, y2))
    
    if distance == 0 and r1 == r2:
        return -1

    if abs(r1 - r2) < distance < (r1 + r2):
        return 2
    elif distance == (r1 + r2) or distance == abs(r1 - r2):
        return 1
    else:
        return 0 


n = int(input())
for _ in range(n):
    x1, y1, r1, x2, y2, r2 = map(int, input().split())
    print(turret_solution(x1, y1, r1, x2, y2, r2))
