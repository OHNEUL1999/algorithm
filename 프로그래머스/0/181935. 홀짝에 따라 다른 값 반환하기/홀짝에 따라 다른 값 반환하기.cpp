#include <numeric>
using namespace std;

int solution(int n) {
    if (n % 2 == 1) {
        // 1부터 n까지 홀수의 합 = (n+1)²/4
        return (n + 1) * (n + 1) / 4;
    } else {
        // 2부터 n까지 짝수의 제곱의 합 = 2n(n+1)(n+2)/3
        // 또는 n/2 * (n/2+1) * (2n+1)/3
        return n * (n + 1) * (n + 2) / 6;
    }
}