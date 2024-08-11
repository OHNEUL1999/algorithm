#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string s) {
    int minVal = 21e8, maxVal = -21e8;
    stringstream ss(s);
    string temp;
    
    while (ss >> temp) {
        int num = stoi(temp);
        if (num < minVal) minVal = num;
        if (num > maxVal) maxVal = num;
    }
    
    string answer = to_string(minVal) + " " + to_string(maxVal);
    return answer;
}
