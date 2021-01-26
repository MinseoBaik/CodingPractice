//Written in C++
#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    vector<vector<string>> words;
    map<string, string> users;
    
    int begin_idx = 0;
    for(int i=0; i<record.size(); i++)
    {
        words.push_back({});
        begin_idx = 0;
        for(int j=0; j<record[i].size(); j++)
        {
            if(record[i][j]==' ')
            {
                words[i].push_back(record[i].substr(begin_idx, j-begin_idx));
                begin_idx = j+1;
            }
        }
        words[i].push_back(record[i].substr(begin_idx, record[i].size()-begin_idx));
    }
    
    for(int i=0; i<words.size(); i++)
    {
        if(words[i].size()==3)
        {
            if(users.find(words[i][1]) == users.end())
                users.insert(pair<string, string> (words[i][1], words[i][2]));
            else
                users[words[i][1]] = words[i][2];
        }
    }
    
    
    for(int i=0; i<words.size(); i++)
    {
        if(words[i][0]=="Enter")
            answer.push_back(users[words[i][1]] + "님이 들어왔습니다.");
        else if(words[i][0]=="Leave")
            answer.push_back(users[words[i][1]] + "님이 나갔습니다.");
    }
    return answer;
}
