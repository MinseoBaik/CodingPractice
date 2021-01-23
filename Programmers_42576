//Written in C++
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    vector<string> diff;
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    set_difference(participant.begin(), participant.end(), completion.begin(), completion.end(), inserter(diff, diff.begin()));
    return diff[0];
}
