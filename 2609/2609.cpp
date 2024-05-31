#include <iostream>
using namespace std;

/*
https://www.youtube.com/watch?v=anSfYgbo694
숫자 2개가 있을 때
숫자1 * 숫자2 = 숫자1,2의 최대공약수 * 숫자1,2의 최소공배수
*/

//최대공약수 구하기
int gcd(int a, int b) {
	if (a == 0)
		return b;
	return gcd(b%a, a);
}

//최소공배수 구하기
int lcd(int a, int b) {
	return (a*b) / gcd(a, b);
}

int main() {
	int a, b;
	cin >> a >> b;

	cout << gcd(a, b) << endl;
	cout << lcd(a, b);

	return 0;
}