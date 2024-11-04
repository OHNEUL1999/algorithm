#include <string>
#include <vector>

using namespace std;

bool is_skip(const string& skip, char a) {
    for (char c : skip) {
        if (c == a) return true;
    }
    return false;
}

string solution(string s, string skip, int index) {
    string answer = "";
    
    for (char ch : s) {
        int steps = 0;
        char next_char = ch;
        
        while (steps < index) {
            next_char = (next_char == 'z') ? 'a' : next_char + 1;
            if (!is_skip(skip, next_char)) {
                steps++;
            }
        }
        
        answer += next_char;
    }
    
    return answer;
}
