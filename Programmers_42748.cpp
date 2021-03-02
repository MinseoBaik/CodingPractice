//Written in C++

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> sub_array;
    int start;
    int end;
    int idx;
    for(int command=0; command<commands.size(); command++)
    {
        start = commands[command][0]-1;
        end = commands[command][1];
        idx = commands[command][2]-1;
        sub_array = vector<int>(array.begin()+start, array.begin()+end);
        sort(sub_array.begin(), sub_array.end());
        answer.push_back(sub_array[idx]);
    }
    return answer;
}
