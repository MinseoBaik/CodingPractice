#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &A) {
    unordered_set<int> A_set(A.begin(), A.end());
    return A_set.size();
}
