stick = 64
count = 0
sum_stick = 0

X = int(input())

#루프를 X와 같을 때까지 실행
while sum_stick != X:

    #현재 막대와 합이 X보다 크면 막대를 절반으로 자름
    if((stick + sum_stick) > X):
        stick = stick // 2
        continue

    sum_stick += stick
    count += 1
    stick = stick // 2
    
print(count)