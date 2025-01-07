def solution(number):
    answer = 0
    length = len(number)
    
    for x in range(length - 2):
        for y in range(x + 1, length - 1):
            for z in range(y + 1, length):
                if number[x] + number[y] + number[z] == 0:
                    answer += 1
    return answer