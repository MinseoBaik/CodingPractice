//Written in C++

#include <string>
#include <vector>
#include <boost/algorithm/string.hpp>

using namespace std;

void removePeriods(string &new_id)
{
    for(int i=0; i<new_id.size(); i++)
    {
        if ((i==0 && new_id[i] == '.') || (i==new_id.size()-1 && new_id[i] == '.') || 
           (i>0 && new_id[i] == '.' && new_id[i-1]=='.'))  
        {    
            new_id.erase(i, 1);  
            i--; 
        }
    }
}


string solution(string new_id) {
    // 1st Step
    boost::to_lower(new_id);

    //2nd Step
    for(int i=0; i<new_id.size(); i++)
    {
        if (!((new_id[i] >= 'a' && new_id[i] <= 'z') ||
            (new_id[i] >= '0' && new_id[i] <= '9' )||
            new_id[i] == '-' || new_id[i] == '_' || new_id[i] == '.'))  
        {    
            new_id.erase(i, 1);  
            i--; 
        }
    }

    // 3rd&4th Step
    removePeriods(new_id);
    
    //5th Step
    if(new_id.size() == 0)
        new_id = "a";
    
    //6th Step
    if(new_id.size()>15)
        new_id.resize(15);
    
    removePeriods(new_id);
    
    //7th Step
    while(new_id.size()<3)
    {
        new_id = new_id + new_id.back();
    }
    
    return new_id;
}
