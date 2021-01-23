#include <string>
#include <vector>

//Written in c++
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> boxes;
    for(size_t i=0; i<moves.size(); i++)
    {
        for(size_t idx=0; idx<board.size(); idx++)
        {
            
            if(board[idx][moves[i]-1]!=0)
            {
                if(boxes.size()>0)
                {
                    if(boxes[boxes.size()-1] == board[idx][moves[i]-1])
                    {
                        boxes.pop_back();  
                        answer+=2;
                    }
                    else
                    {
                        boxes.push_back(board[idx][moves[i]-1]);
                    }
                }
                else
                {
                    boxes.push_back(board[idx][moves[i]-1]);
                }
                board[idx][moves[i]-1] = 0;
                break;
            }
        }
    }
    return answer;
}
