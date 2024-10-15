#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string channels[101];
    int N;
    cin >> N;
    int kbs1 = -1, kbs2 = -1;

    //이부분 1부터 N까지 수정
    for (int i = 1; i <= N; i++) {
        cin >> channels[i];
        if (channels[i] == "KBS1") {
            kbs1 = i;
        }
        if (channels[i] == "KBS2") {
            kbs2 = i;
        }
    }

    for (int i = 1; i < kbs1; i++) {
        cout << 1;
    }
    for (int i = 1; i < kbs1; i++) {
        cout << 4;
    }
    //인덱스 바뀌었으면 1추가
    if (kbs1 > kbs2) {
        kbs2++;
    }


    for (int i = 1; i < kbs2; i++) {
        cout << 1;
    }
    //2채널까지 옮기는 거니깐 -1
    for (int i = 1; i < kbs2 - 1; i++) {
        cout << 4;
    }

    return 0;
}