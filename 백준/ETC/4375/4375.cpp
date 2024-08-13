#include <iostream>
using namespace std;

int main() {
	long long n;
	long long num = 1; //자리수 1이어야 함.
	int cnt = 1; //자리수 카운트
	while (cin >> n) {  //Test case수 모르므로 입력받는동안은 계속 출력함
		num = 1;
		cnt = 1;
		while (1) {
			num = num % n;
			if (num == 0) {
				break;
			} // 자리수가 1이 아니면 빠져나옴.
			num = (num * 10) % n + 1 % n; //모듈러 연산 공식 사용 
			cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}