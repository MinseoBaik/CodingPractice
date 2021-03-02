//Written in C++

#include <string>
#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

int solution(int n) {
    int answer = 0;
    string n_ternary = "";
    while(n>0)
    {
        n_ternary += to_string(n%3);
        n /= 3;
    }
    stoi(n_ternary, 0, 3);
    return stoi(n_ternary, 0, 3);
}
