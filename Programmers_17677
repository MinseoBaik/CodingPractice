//Written in C++
#include <string>
#include <boost/algorithm/string.hpp>
#include <iostream>
#include <vector>

using namespace std;

bool isSpecialCharacter(char character)
{
    return (character<'a' || character>'z');
}

void removeSpecialCharacter(vector<string> &orgVecotr)
{
    for(int i=0; i<orgVecotr.size(); i++)
    {
        if(isSpecialCharacter(orgVecotr[i][0]) || isSpecialCharacter(orgVecotr[i][1]))
        {
            orgVecotr.erase(orgVecotr.begin()+i);
            i--;
        }    
    }
}

void createVector(string orgString, vector<string> &orgVector)
{
    for(int i=1; i<orgString.size(); i++)
    {
        orgVector.push_back(orgString.substr(i-1, 2));
    }
}

int solution(string str1, string str2) {
    int answer = 65536;
    int intersection_cnt = 0;
    int union_cnt;
    vector<string> vec1;
    vector<string> vec2;
    boost::to_lower(str1);
    boost::to_lower(str2);
    createVector(str1, vec1);
    createVector(str2, vec2);
    removeSpecialCharacter(vec1);
    removeSpecialCharacter(vec2);
    
    if(!(vec1.size()==0 && vec2.size()==0))
    {
        union_cnt = vec1.size()+vec2.size();
        for(int i=0; i<vec1.size(); i++)
        {
            for(int j=0; j<vec2.size(); j++)
            {
                if(vec1[i]==vec2[j])
                {
                    intersection_cnt++;
                    vec2.erase(vec2.begin()+j);
                    break;
                }
            }
        }
        union_cnt -= intersection_cnt;
        answer = answer*intersection_cnt/union_cnt;
    }
    return answer;
}
