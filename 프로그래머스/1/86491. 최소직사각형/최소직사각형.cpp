#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int max_length = 0;
    int max_height = 0;

    for(const auto& size : sizes) {
        int width = max(size[0], size[1]);
        int height = min(size[0], size[1]);

        max_length = max(max_length, width);
        max_height = max(max_height, height);
    }

    return max_length * max_height;
}