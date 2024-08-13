#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N = 50;  // N의 진짜 약수의 개수
	cin >> N;

	int arr[50] = { 0 };  // N의 진짜 약수 배열

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N);   //algorithm 안의 기능. 오름차순 정렬

	cout << arr[0] * arr[N - 1];  // 배열 중 첫번째와 마지막의 곱이 N이 된다.

	return 0;
}