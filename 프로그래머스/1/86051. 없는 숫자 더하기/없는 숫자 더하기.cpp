#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    vector<int> bucket(10, 0);
    for(int i = 0; i < numbers.size(); i++) {
        bucket[numbers[i]] = 1;
    }
    for(int i = 0; i < 10; i++) {
        if(bucket[i] == 0) answer += i;
    }
    return answer;
}