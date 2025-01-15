#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int count = 0;
    
    if (num == 1) {
        return 0;
    }
    
    long long answer = num;
    
    while (answer != 1) {
        count++;
        if (answer % 2 == 0) {
            answer /= 2;
        } else {
            answer = answer * 3 + 1;
        }
        if (count >= 500) {
            return -1;
        }
    }
    
    return count;
}