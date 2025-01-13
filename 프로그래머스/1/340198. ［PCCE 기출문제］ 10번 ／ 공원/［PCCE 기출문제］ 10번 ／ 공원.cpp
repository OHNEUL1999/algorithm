#include <string>
#include <vector>

using namespace std;



int solution(vector<int> mats, vector<vector<string>> park) {
    int rows = park.size();
    int cols = park[0].size();
    
    for (int i = 0; i < mats.size(); ++i) {
        for (int j = 0; j < mats.size() - i - 1; ++j) {
            if (mats[j] < mats[j + 1]) {
                int temp = mats[j];
                mats[j] = mats[j + 1];
                mats[j + 1] = temp;
            }
        }
    }
    
    for (int size : mats) {
        for (int i = 0; i <= rows - size; ++i) {
            for (int j = 0; j <= cols - size; ++j) {
                bool canPlace = true;

                for (int x = 0; x < size; ++x) {
                    for (int y = 0; y < size; ++y) {
                        if (park[i + x][j + y] != "-1") {
                            canPlace = false;
                            break;
                        }
                    }
                    if (!canPlace) break;
                }

                if (canPlace) return size;
            }
        }
    }
    
    return -1;
}