#include <iostream>
using namespace std;

int main() {
	int stick = 64, X, count = 0;
	cin >> X;

	int sum_stick = 0;

	
	while (sum_stick != X){

		if (stick + sum_stick > X) {
			stick /= 2;
			continue;
		}

		sum_stick += stick;
		count++;
		stick /= 2;

	}
	cout << count;
	
	return 0;
}
