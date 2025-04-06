#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer(n); 
    
    long long value = 0;
    
    generate(answer.begin(), answer.end(), [&value, x]() {
        value += x;
        return value;
    });
    
    return answer;
}