#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &A) {
    sort(A.begin(), A.end());
    int n = A.size();
    int max_triplet = A[n-1]*A[n-2]*A[n-3];
    if(A[0]*A[1]*A[n-1]>max_triplet)
        max_triplet = A[0]*A[1]*A[n-1];
    return max_triplet;
}
