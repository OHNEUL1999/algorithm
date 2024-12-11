def solution(n, m, section):
    answer = 0
    current_position = 0

    for s in section:
        if s > current_position:
            current_position = s + m - 1
            answer += 1
    
    return answer
