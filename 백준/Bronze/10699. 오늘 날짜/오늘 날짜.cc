#include <iostream>
#include <time.h>
#include <ctime>
using namespace std;

int main() {
    time_t timer;
    struct tm* t;
    timer = time(NULL);
    t = localtime(&timer);
    
    cout << t->tm_year + 1900 << "-" << t->tm_mon + 1 << "-" << t->tm_mday;
    return 0;
}