#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string left_half = "";
    
    for (int i = 1; i < food.size(); ++i) {
        int count = food[i] / 2;
        left_half += string(count, '0' + i);
    }
    
    string right_half = left_half;
    reverse(right_half.begin(), right_half.end());
    
    return left_half + "0" + right_half;
}
