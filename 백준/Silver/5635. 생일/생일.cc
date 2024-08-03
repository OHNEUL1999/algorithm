#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Person {
    string name;
    int day;
    int month;
    int year;
};

// 나이가 많을수록 앞에 오게
bool compare(const Person &a, const Person &b) {
    if (a.year != b.year)
        return a.year < b.year;
    if (a.month != b.month)
        return a.month < b.month;
    return a.day < b.day;
}

int main() {
    int n;
    cin >> n;

    vector<Person> people(n);

    for (int i = 0; i < n; i++) {
        cin >> people[i].name >> people[i].day >> people[i].month >> people[i].year;
    }

    sort(people.begin(), people.end(), compare);

    cout << people.back().name << endl << people.front().name << endl;

    return 0;
}
