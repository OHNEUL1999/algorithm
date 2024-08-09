#include <iostream>

using namespace std;

int main() {
    int A, B, k;
    cin >> A >> B >> k;

    A = A % B;
    for (int i = 0; i < k; ++i) {
        A *= 10; // 소수점 자리를 늘림
        if (i == k - 1) {
            cout << A / B << endl; // k번째 자릿수를 출력
        }
        A %= B; // 다음 자릿수 계산 위해 나머지를 취함
    }

    return 0;
}
