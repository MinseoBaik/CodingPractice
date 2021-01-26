//Written in C++

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = s.size();
    vector<string> strings;
    for(size_t unit=1; unit<=s.size(); unit++)
    {
        strings.clear();
        for(size_t idx=0; idx<s.size(); idx++)
        {
            if(idx%unit==0)
            {
                string temp(1, s[idx]);
                strings.push_back(temp); 
            }
            else
            {
                strings[strings.size()-1] = strings.back()+s[idx];
            }
        }
        
        int cnt = 0;
        string last = "";
        string temp_ans = "";
        for(size_t i=0; i<strings.size(); i++)
        {
            if(i==0)
            {
                last = strings[i];    
                cnt = 1;
            }
            else
            {
                if(last!=strings[i])
                {
                    if(cnt==1)
                        temp_ans += last;
                    else
                        temp_ans += to_string(cnt) + last;
                    last = strings[i];
                    cnt = 1;
                }
                else
                {
                    cnt++;
                }
            }
        }
        if(cnt==1)
            temp_ans += last;
        else
            temp_ans += to_string(cnt) + last;
        if(temp_ans.size()<answer)
            answer = temp_ans.size();
    }
    return answer;
}
