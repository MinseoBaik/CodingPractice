//Written in C++

#include <string>
#include <vector>
#include <iostream>

using namespace std;

string decimalToBinary(int num, int n)
{
    string binary = "";
    for(int i=0; 0<num; i++)
    {
        binary=to_string(num%2)+binary;
        num/=2;
    }
    if(binary.size()<n)
        binary = string(n - binary.length(), '0') + binary;
    return binary;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    string arr1_str;
    string arr2_str;
    string ans;
    for(int i=0; i<arr1.size(); i++)
    {
        arr1_str = decimalToBinary(arr1[i], arr1.size());
        arr2_str = decimalToBinary(arr2[i], arr2.size());
        ans = "";
        
        for(int j=0; j<arr1_str.size(); j++)
        {
            if(arr1_str[j]=='1'||arr2_str[j]=='1')
                ans+='#';
            else
                ans+=' ';
        }
        answer.push_back(ans);
    }
    return answer;
}
