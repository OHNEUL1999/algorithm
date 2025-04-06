// #include <string>
// #include <vector>
// #include <algorithm>
// #include <ranges>
// using namespace std;

// int solution(int n) {
//     auto numbers = views::iota(2, n);
//     auto result = ranges::find_if(numbers, [n](int x) { return n % x == 1; });
    
//     return (result != numbers.end()) ? *result : n - 1;
// }


#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n) {
    // 2부터 시작하여 조건을 만족하는 첫 번째 수 찾기
    for (int x = 2; x < n; ++x) {
        if (n % x == 1) {
            return x;
        }
    }
    
    // n-1은 항상 조건을 만족함 (n % (n-1) = 1)
    return n - 1;
}