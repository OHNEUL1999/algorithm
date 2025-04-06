#include <string>
#include <vector>
#include <cmath>
using namespace std;

auto is_even = [](int num) -> bool {
    return num % 2 == 0;
};

int solution(int a, int b) {
    bool a_is_odd = !is_even(a);
    bool b_is_odd = !is_even(b);
    
    return (a_is_odd && b_is_odd) ? (a*a + b*b) :
           (a_is_odd || b_is_odd) ? (2 * (a + b)) :
           abs(a - b);
}