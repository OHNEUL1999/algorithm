#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for (const vector<int>& cmd : commands) {
        // i, j, k를 0-based index로 변환
        int i = cmd[0] - 1;
        int j = cmd[1] - 1;
        int k = cmd[2] - 1;
        
        // i부터 j까지 잘라서 새로운 배열을 생성
        vector<int> subArray(array.begin() + i, array.begin() + j + 1);
        
        // 정렬
        sort(subArray.begin(), subArray.end());
        
        // k번째 원소를 추출
        answer.push_back(subArray[k]);
    }
    
    return answer;
}
