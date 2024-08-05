# 일곱 난쟁이
shorts = []
sum = 0
for i in range(9):
    shorts.append(int(input()))
    sum += shorts[i]

flag = 0
for i in range(8):
    for j in range(i+1, 9):
        if (sum - shorts[i] - shorts[j]) == 100:
            shorts.pop(j)
            shorts.pop(i)
            flag = 1
            break
    if flag == 1:
        break

shorts = sorted(shorts)
for i in shorts:
    print(i)