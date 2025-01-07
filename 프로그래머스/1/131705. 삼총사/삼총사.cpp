#include <string>
#include <vector>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    
    int length = number.size();
    for (int x = 0; x < length - 2; x++) {
        for (int y = x + 1; y < length - 1; y++) {
            for (int z = y + 1; z < length; z++){
                if (number[x] + number[y] + number[z] == 0) {
                    answer++;
                }
            }
        }
    }
    
    return answer;
}