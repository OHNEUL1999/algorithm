#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> stack;
    // 1231만 제거
    
    for (int item : ingredient) {
        stack.push_back(item);

        // 스택의 마지막 4개가 [1, 2, 3, 1]인지 확인
        if (stack.size() >= 4 &&
            stack[stack.size() - 4] == 1 &&
            stack[stack.size() - 3] == 2 &&
            stack[stack.size() - 2] == 3 &&
            stack[stack.size() - 1] == 1) {
            
            // 패턴을 찾았으면 제거 (햄버거 포장)
            stack.pop_back();
            stack.pop_back();
            stack.pop_back();
            stack.pop_back();
            
            // 포장한 햄버거 개수 증가
            answer++;
        }
    }
    return answer;
}