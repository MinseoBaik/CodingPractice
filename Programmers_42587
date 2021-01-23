#https://programmers.co.kr/learn/courses/30/lessons/42587?language=python3

def solution(priorities, location):
    answer = 0
    while(priorities):
        max_ = max(priorities)
        if(priorities[0]!=max_):
            priorities.append(priorities.pop(0))
            location-=1
            if(location<0):
                location = len(priorities)-1
        else:
            priorities.pop(0)
            answer+=1
            location-=1
            if(location < 0):
                return answer
    return answer



-----------------------------------------------------------------------------------------------
//The same code in C++
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int pop_front(vector<int> &v)
{
    int first = v[0];
    v.erase(v.begin());
    return first;
}

int solution(vector<int> priorities, int location) {
    int answer = 1;
    while(priorities.size()>=0)
    {
        int max_ = *max_element(std::begin(priorities), std::end(priorities));
        if(priorities[0]<max_)
        {
            priorities.push_back(pop_front(priorities));
            location--;
            if(location<0)
                location = priorities.size()-1;
        }
        else
        {
            if(location==0)
            {
                priorities.clear();
                return answer;
            }
            else
            {
                pop_front(priorities);
                answer++;
                location--;
            }
        }
    }
    return answer;
}
