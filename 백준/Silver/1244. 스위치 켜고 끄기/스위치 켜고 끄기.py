n = int(input())
switches = [0] + list(map(int, input().split()))
students = int(input())

def change_switch(switches, n):
    if switches[n] == 0:
        switches[n] = 1
    else:
        switches[n] = 0


for _ in range(students):
    gender, number = map(int, input().split())

    # boy, 받은 수의 배수의 스위치 모두 바꿈
    if gender == 1:
        for i in range(number, n + 1, number):
            change_switch(switches, i)
    
    # girl, 받은 수 기준 좌우 대칭이면서 가장 많은 스위치 포함하는 구간 찾아서 그 구간의 스위치 모두 바꿈
    else:
        change_switch(switches, number)
        left = number - 1
        right = number + 1

        while left >= 1 and right <= n  and switches[left] == switches[right]:
            change_switch(switches, left)
            change_switch(switches, right)

            left -= 1
            right += 1

for i in range(1, n+1):
    print(switches[i], end = " ")
    if i % 20 == 0:
        print()

if n % 20 != 0:
    print()
