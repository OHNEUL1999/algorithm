def solution(data, col, row_begin, row_end):
    answer = 0
    
#     1. 정렬
    data.sort(key=lambda x:(x[col-1], -x[0]))
    
#     2. S_i mod, XOR
    for i in range(row_begin, row_end + 1):
        S_i = sum(value % i for value in data[i - 1])
        
#         XOR ^=
        answer ^= S_i 
    
    return answer