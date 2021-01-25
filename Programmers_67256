//Written in C++

#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int left = 10;
    int right = 10;
    int r_distance = 0;
    int l_distance = 0;
    for(int num=0; num<numbers.size(); num++)
    {
        if(numbers[num]==0)
        {
            numbers[num]=11;
        }
        if(numbers[num]%3==1)
        {
            answer+='L';
        }
        else if(numbers[num]%3==0)
        {
            answer+='R';
        }
        else
        {
            r_distance = abs(right-numbers[num])/3 + abs(right-numbers[num])%3;
            l_distance = abs(left-numbers[num])/3 + abs(left-numbers[num])%3;
            if(r_distance == l_distance)
            {
                answer = hand=="right" ? answer+'R':answer+'L';
            }
            else
            {
                answer = r_distance<l_distance ? answer+'R':answer+'L';
            }
        }
        if(answer.back()=='R')
        {
            right = numbers[num];
        }
        else
        {
            left = numbers[num];
        }
    }
    return answer;
}
