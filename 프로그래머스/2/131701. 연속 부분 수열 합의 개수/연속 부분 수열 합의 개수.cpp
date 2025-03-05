#include <vector>
#include <unordered_set>

using namespace std;

/**
*   1. 합할 수의 갯수(1 ~ elements 크기)
*   2. 순회하면서 합 구하기(시작지점 옆으로 이동, 0 ~ elements 크기)
*   3. 중복 제거 set에 추가(아니면 합이 동일한것 찾아서 제거)
*   4. set의 길이 = 나올 수 있는 합의 갯수
*/

int solution(vector<int> elements) {
    int n = elements.size();
    unordered_set<int> sums; // 중복 허용 안함

    // elements 길이 확장(2배)
    vector<int> circle(elements.begin(), elements.end());
    circle.insert(circle.end(), elements.begin(), elements.end());

    // 길이 1부터 n까지의 부분 수열 합 계산
    for (int length = 1; length <= n; length++) {
        for (int start = 0; start < n; start++) {
            int sum = 0;
            for (int i = 0; i < length; i++) {
                sum += circle[start + i];
            }
            sums.insert(sum); // 중복을 허용하지 않음(자동 제거)
        }
    }

    return sums.size();
}
