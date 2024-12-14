def solution(n, control):
    answer = n
    
    for i in control:
        if i == "w":
            answer += 1
        if i == "s":
            answer -= 1
        if i == "d":
            answer += 10
        if i == "a":
            answer -= 10
    return answer