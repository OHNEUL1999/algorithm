#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    queue<int> q;

    for(int i = 1; i <= N; i++) {
        q.push(i);
    }

    cout << "<";
    while (!q.empty()) {
        // K-1번 앞 사람을 뒤로 보냄
        for (int i = 1; i < K; i++) {
            q.push(q.front());
            q.pop();
        }

        // K번째 사람을 출력하고 제거
        cout << q.front();
        q.pop();

        // 큐가 비어 있지 않으면 쉼표와 공백을 추가
        if (!q.empty()) {
            cout << ", ";
        }
    }
    cout << ">" << endl;

    return 0;
}

