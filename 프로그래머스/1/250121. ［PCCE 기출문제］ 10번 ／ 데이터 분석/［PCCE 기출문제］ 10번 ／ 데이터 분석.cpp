#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    
    // 필터링 기준이 되는 인덱스를 결정
    int filter_index = 0;
    if (ext == "code") filter_index = 0;
    else if (ext == "date") filter_index = 1;
    else if (ext == "maximum") filter_index = 2;
    else if (ext == "remain") filter_index = 3;

    // 주어진 조건에 따라 데이터를 필터링하여 answer에 추가
    for (const auto& row : data) {
        if (row[filter_index] < val_ext) {
            answer.push_back(row);
        }
    }

    // 정렬 기준이 되는 인덱스를 결정
    int sort_index = 0;
    if (sort_by == "code") sort_index = 0;
    else if (sort_by == "date") sort_index = 1;
    else if (sort_by == "maximum") sort_index = 2;
    else if (sort_by == "remain") sort_index = 3;

    // 정렬 수행
    sort(answer.begin(), answer.end(), [sort_index](const vector<int>& a, const vector<int>& b) {
        return a[sort_index] < b[sort_index];
    });
    
    return answer;
}
