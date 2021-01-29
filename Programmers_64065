//Written in C++

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(vector<int> a, vector<int> b)
{
    return a.size()<b.size();
}

void splitNumbers(vector<int> &nums, string const s)
{
    int start_idx = 0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]==',')
        {
            nums.push_back(stoi(s.substr(start_idx, i)));
            start_idx = i+1;
        }
    }
    nums.push_back(stoi(s.substr(start_idx, s.size())));
}

vector<int> solution(string s) {
    vector<int> answer;
    vector<vector<int>> s_vec;
    vector<int> temp;
    int start_idx = 0;
    for(int i=0; i<s.length()-1; i++)
    {
        if(s[i]=='{')
            start_idx = i;
        else if(s[i]=='}')
        {
            splitNumbers(temp, s.substr(start_idx+1, i-(start_idx+1)));
            s_vec.push_back(temp);
            temp.clear();
        }
    }
    sort(s_vec.begin(), s_vec.end(), compare);
    for(int i=0; i<s_vec.size(); i++)
    {
        for(int j=0; j<s_vec[i].size(); j++)
        {
           if(find(answer.begin(), answer.end(), s_vec[i][j])==answer.end())
               answer.push_back(s_vec[i][j]);
        }
    }
    return answer;
}
