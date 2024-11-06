#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>
using namespace std;

int solution(vector<string> friends, vector<string> gifts) {
    int n = friends.size();
    unordered_map<string, int> nameToIdx;
    for(int i = 0; i < n; i++) {
        nameToIdx[friends[i]] = i;
    }
    
    vector<vector<int>> giftRecord(n, vector<int>(n, 0));
    // 선물 지수를 계산
    vector<int> given(n, 0);
    vector<int> received(n, 0);
    
    // 선물 기록
    for(const string& gift : gifts) {
        stringstream ss(gift);
        string giver, receiver;
        ss >> giver >> receiver;
        int giverIdx = nameToIdx[giver];
        int receiverIdx = nameToIdx[receiver];
        giftRecord[giverIdx][receiverIdx]++;
        given[giverIdx]++;
        received[receiverIdx]++;
    }
    
    // 다음 달에 받을 선물 수 계산
    vector<int> nextMonthGifts(n, 0);
    
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            // 두 사람이 주고받은 선물 비교
            if(giftRecord[i][j] > giftRecord[j][i]) {
                // i가 j에게 더 많이 줌
                nextMonthGifts[i]++;
            }
            else if(giftRecord[i][j] < giftRecord[j][i]) {
                // j가 i에게 더 많이 줌
                nextMonthGifts[j]++;
            }
            else {
                // 같거나 주고받은 기록이 없는 경우, 선물 지수 비교
                int giftIndexI = given[i] - received[i];
                int giftIndexJ = given[j] - received[j];
                
                if(giftIndexI > giftIndexJ) {
                    nextMonthGifts[i]++;
                }
                else if(giftIndexI < giftIndexJ) {
                    nextMonthGifts[j]++;
                }
                // 선물 지수도 같은 경우는 아무도 선물을 받지 않음
            }
        }
    }
    
    // 가장 많은 선물을 받는 사람의 선물 수 찾기
    int maxGifts = 0;
    for(int gifts : nextMonthGifts) {
        maxGifts = max(maxGifts, gifts);
    }
    
    return maxGifts;
}