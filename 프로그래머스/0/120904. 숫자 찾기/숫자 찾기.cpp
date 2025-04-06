#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int num, int k) {
    // TO STRING
    string numStr = to_string(num);
    char kChar = k + '0';
    
    auto it = find(numStr.begin(), numStr.end(), kChar);
    
    if (it == numStr.end()) {
        return -1;
    } else {
        return (it - numStr.begin()) + 1;
    }
}