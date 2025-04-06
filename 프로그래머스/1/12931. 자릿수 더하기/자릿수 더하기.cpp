#include <iostream>
#include <string>
#include <numeric>
using namespace std;

int solution(int n)
{
    string s = to_string(n);
    
    int answer = accumulate(s.begin(), s.end(), 0, 
                           [](int sum, char digit) {
                               return sum + (digit - '0');
                           });
    
    return answer;
}