#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> &A, int K) {
    if(A.size()==0)
      return {};
    vector<int> answer;
    int n = A.size();
    for(int i=n-(K%n); i<n; i++)
    {
        answer.push_back(A[i]);
    }
    for(int i=0; i<n-(K%n); i++)
    {
        answer.push_back(A[i]);
    }
    return answer;
}
