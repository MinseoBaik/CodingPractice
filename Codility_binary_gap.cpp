#include <bits/stdc++.h>
using namespace std;

int decToBin(int N)
{
    int size = 0;
    int last_idx = -1;
    int max_idx = 0;
    while(N>0)
    {
        if(N%2==1)
        {
            if(last_idx>-1 && size-last_idx-1>max_idx)
                max_idx = size-last_idx-1;
            last_idx = size;
        }
        N /= 2;
        size++;
    }
    return max_idx;
}

int solution(int N) {
    int size = 0;
    return decToBin(N);
}
