#include <iostream>
#include <iomanip>  // 소수점 자리를 설정하기 위한 라이브러리
using namespace std;

int main() {
    int a, b;
    double res;
    cin >> a >> b;
    res = (double)a / b;
    
    // 소수점 이하 10자리까지 출력 설정
    cout << fixed << setprecision(10) << res;
}
