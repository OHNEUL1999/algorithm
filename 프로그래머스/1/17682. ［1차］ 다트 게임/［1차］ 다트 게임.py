def solution(dartResult):
    answer = 0
    scores = []
    current_score = 0

    for i, char in enumerate(dartResult):
        if char.isdigit():
            if char == '0' and i > 0 and dartResult[i - 1] == '1':
                current_score = 10
                scores.pop()  # 기존 1 제거
                scores.append(current_score)  # 10 추가
            else:
                current_score = int(char)
                scores.append(current_score)
        elif char in 'SDT':
            if char == 'S':
                scores[-1] **= 1
            elif char == 'D':
                scores[-1] **= 2
            elif char == 'T':
                scores[-1] **= 3
        elif char == '*':
            if scores:
                scores[-1] *= 2
            if len(scores) > 1:
                scores[-2] *= 2
        elif char == '#':
            scores[-1] *= -1

    return sum(scores)
