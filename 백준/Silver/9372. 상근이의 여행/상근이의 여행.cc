#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, M;  // N: 국가의 수, M: 비행기의 수
        cin >> N >> M;
        
        for (int i = 0; i < M; i++) {
            int u, v;
            cin >> u >> v;  // 비행기 경로 입력
        }
        
        cout << N - 1 << endl;
    }

    return 0;
}
