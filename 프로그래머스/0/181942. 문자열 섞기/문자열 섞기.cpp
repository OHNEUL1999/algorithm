#include <string>
#include <vector>

using namespace std;

string solution(string str1, string str2) {
    string answer = "";
    int n = str1.size();
    for (int i = 0; i < n; i++) {
        answer += str1[i];
        answer += str2[i];
    }
    return answer;
}