//Written in C++

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void pop_front(vector<string> &cache)
{
    if(cache.size()>0)
        cache.erase(cache.begin());
}

int solution(int cacheSize, vector<string> cities) {
    if(cacheSize == 0)
        return cities.size()*5;
    int answer = 0;
    vector<string> cache;

    for(size_t i=0; i<cities.size(); i++)
    {
        transform(cities[i].begin(), cities[i].end(), cities[i].begin(), ::tolower); 
        if(find(cache.begin(), cache.end(), cities[i])==cache.end())
        {
            if(cache.size()==cacheSize)
                pop_front(cache);
            cache.push_back(cities[i]);
            answer += 5;
        }
        else
        {
            cache.erase(find(cache.begin(), cache.end(), cities[i]));
            cache.push_back(cities[i]);
            answer++;
        }
    }
    return answer;
}
