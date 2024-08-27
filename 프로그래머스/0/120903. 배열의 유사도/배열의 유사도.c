#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// s1_len은 배열 s1의 길이입니다.
// s2_len은 배열 s2의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s1[], size_t s1_len, const char* s2[], size_t s2_len) {
    int answer = 0;
    for(int i = 0; i < s2_len; i++){
        for(int j = 0; j < s1_len; j++){
            if (strcmp(s1[j], s2[i]) == 0) {
                answer++;
            }
        }
    }
    return answer;
}