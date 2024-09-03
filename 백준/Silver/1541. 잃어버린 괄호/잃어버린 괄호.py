line = input()

# '-'를 기준으로 문자열을 분리
parts = line.split('-')

# 첫 번째 덩어리 계산 (+ 기준으로 덧셈)
first_part = sum(int(num) for num in parts[0].split('+'))

# 나머지 덩어리들 계산
result = first_part
for part in parts[1:]:
    result -= sum(int(num) for num in part.split('+'))

print(result)