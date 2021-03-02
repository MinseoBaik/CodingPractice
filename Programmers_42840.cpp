//Written in C++
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> scores(3, 0);
    vector<vector<int>> patterns = {{1, 2, 3, 4, 5}, 
                                    {2, 1, 2, 3, 2, 4, 2, 5},
                                    {3, 3, 1, 1, 2, 2, 4, 4, 5, 5}};
    int max_val = 0;
    for(int i=0; i<answers.size(); i++)
    {
        for(int j=0; j<3; j++)
        {
            if(answers[i]==patterns[j][i%patterns[j].size()])
            {
                scores[j]++;
                if(scores[j]>max_val)
                {
                    max_val = scores[j];
                }
            }    
        }
    }
    
    for(int i=0; i<scores.size(); i++)
    {
        if(scores[i] == max_val)
        {
            answer.push_back(i+1);
        }
    }
    return answer;
}
