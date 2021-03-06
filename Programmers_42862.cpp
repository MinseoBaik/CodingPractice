//Written in C++
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> reserved;
    for(size_t i=0; i<reserve.size(); i++)
    {
        auto it = find(lost.begin(), lost.end(), reserve[i]);
        auto idx = distance(lost.begin(), it);
        if(idx!=lost.end()-lost.begin())
        {
            lost.erase(lost.begin()+idx);
        }
        else
        {
            reserved.push_back(reserve[i]);    
        }
    }
    reserve = reserved;
    for(size_t i=0; i<reserve.size(); i++)
    {
        auto it = find(lost.begin(), lost.end(), reserve[i]-1);
        auto idx = distance(lost.begin(), it);
        if(idx!=lost.end()-lost.begin())
        {

            lost.erase(lost.begin()+idx);
        }
        else
        {
            it = find(lost.begin(), lost.end(), reserve[i]+1);
            idx = distance(lost.begin(), it);
            if(idx!=lost.end()-lost.begin())
            {
                lost.erase(lost.begin()+idx);
            }
        }
    }
    answer = n-lost.size();
    return answer;
}
