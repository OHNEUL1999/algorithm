#include <string>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

int to_seconds(const string& time) {
    int minutes = stoi(time.substr(0, 2));
    int seconds = stoi(time.substr(3, 2));
    return minutes * 60 + seconds;
}

string to_mmss(int seconds) {
    int minutes = seconds / 60;
    seconds %= 60;
    ostringstream oss;
    oss << setfill('0') << setw(2) << minutes << ":" << setfill('0') << setw(2) << seconds;
    return oss.str();
}

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    int video_len_sec = to_seconds(video_len);
    int pos_sec = to_seconds(pos);
    int op_start_sec = to_seconds(op_start);
    int op_end_sec = to_seconds(op_end);
    
    for (const string& command : commands) {
        if (pos_sec >= op_start_sec && pos_sec <= op_end_sec) {
            pos_sec = op_end_sec;
        }

        if (command == "prev") {
            pos_sec = max(0, pos_sec - 10);
        } else if (command == "next") {
            pos_sec = min(video_len_sec, pos_sec + 10);
        }

        // 오프닝 구간에 있으면 오프닝 끝으로 이동
        if (pos_sec >= op_start_sec && pos_sec <= op_end_sec) {
            pos_sec = op_end_sec;
        }
    }
    
    return to_mmss(pos_sec);
}