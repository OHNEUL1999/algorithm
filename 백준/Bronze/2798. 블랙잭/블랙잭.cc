#include <iostream>
#include <vector>
using namespace std;

int bucket[100001];

int main() {
    int N, M, sum = 0;
    cin >> N >> M;

    for(int i = 0; i < N; ++i) {
        cin >> bucket[i];
    }

    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                int current_sum = bucket[i] + bucket[j] + bucket[k];
                if (sum < current_sum && current_sum <= M) {
                    sum = current_sum;
                }
            }
        }
    }

    cout << sum << endl;
    
    return 0;
}