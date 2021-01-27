//Written in C++

#include <string>
#include <vector>
#include <iostream>

using namespace std;

// C#->H, D#->I, F#->J, G#->K, A#->L
void changeCodeSharp(string &code)
{
    for(int j=1; j<code.length(); j++)
    {
        if(code[j]=='#')
        {
            if(code[j-1]=='C')
            {
                code[j]='H';
                code.erase(j-1,1);
                j--;
            }
            else if(code[j-1]=='D')
            {
                code[j]='I';
                code.erase(j-1,1);
                j--;
            }
            else if(code[j-1]=='F')
            {
                code[j]='J';
                code.erase(j-1,1);
                j--;
            }
            else if(code[j-1]=='G')
            {
                code[j]='K';
                code.erase(j-1,1);
                j--;
            }
            else if(code[j-1]=='A')
            {
                code[j]='L';
                code.erase(j-1,1);
                j--;
            }
        }   
    }
}


string solution(string m, vector<string> musicinfos) {
    string answer = "(None)";
    vector<vector<string>> infos;
    int start_idx;
    
    // Convert string to vector
    for(int i=0; i<musicinfos.size(); i++)
    {
        infos.push_back({});
        start_idx = 0;
        for(int j=0; j<musicinfos[i].length(); j++)
        {
            if(musicinfos[i][j]==',')
            {
                infos[i].push_back(musicinfos[i].substr(start_idx, j-start_idx));
                start_idx = j+1;
            }    
        }
        infos[i].push_back(musicinfos[i].substr(start_idx, musicinfos[i].length()-start_idx));
    }
    
    // Remove #
    changeCodeSharp(m);
    for(int i=0; i<infos.size(); i++)
    {
        changeCodeSharp(infos[i][3]);
    }
    
    // Calculate play time
    for(int i=0; i<infos.size(); i++)
    {
        int start_time = stoi(infos[i][0].substr(0, 2))*60+stoi(infos[i][0].substr(3, 2));
        int end_time = stoi(infos[i][1].substr(0, 2))*60+stoi(infos[i][1].substr(3, 2));
        int play_time = end_time-start_time;
        infos[i].push_back(to_string(play_time));
    }
    
    // Create codes according to the play time
    string code;
    vector<int> answers;
    for(int i=0; i<infos.size(); i++)
    {
        code = "";
        for(int j=0; j<stoi(infos[i][4]); j++)
        {
            code+=infos[i][3][j%infos[i][3].length()];
        }
        if(code.find(m)!= string::npos)
            answers.push_back(i);
    }
    
    int max_play_time = 0;
    for(int i=0; i<answers.size(); i++)
    {
        if(stoi(infos[answers[i]][4])>max_play_time)
        {
            max_play_time = stoi(infos[answers[i]][4]);
            answer = infos[answers[i]][2];
        }
    }
    
    for(int i=0; i<infos.size(); i++)
    {
        for(int j=0; j<infos[i].size(); j++)
        {
            //cout << infos[i][j] << endl;
        }
    }
    return answer;
}
