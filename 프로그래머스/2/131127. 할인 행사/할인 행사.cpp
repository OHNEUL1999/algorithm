// 모두 할인이면, equal써도 되려나. find사용하거나 countif/equal사용하면 될 것 같음.
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    
    // 10일 기간 내에 모든 제품을 구매할 수 있는지 확인하는 함수
    auto canBuyAllProducts = [&want, &number](const vector<string>& period) {
        // 현재 기간 동안의 제품들을 카운트
        map<string, int> periodCount;
        for (const auto& product : period) {
            periodCount[product]++;
        }
        
        // 모든 원하는 제품이 충분한 수량으로 있는지 확인
        for (size_t i = 0; i < want.size(); i++) {
            if (periodCount[want[i]] < number[i]) {
                return false;
            }
        }
        return true;
    };
    
    // 각 가능한 10일 기간을 확인
    for (int i = 0; i <= discount.size() - 10; i++) {
        vector<string> currentPeriod(discount.begin() + i, discount.begin() + i + 10);
        if (canBuyAllProducts(currentPeriod)) {
            answer++;
        }
    }
    
    return answer;
}