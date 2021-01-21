"""
Created on Wed Jan 21 11:16:04 2021

@Author: minseo.baik
@File type: Spyder (Python 3.7)
@Description: To solve question #2231 from Baekjoon
              using brute force algorithm.
"""
import sys

m = int(sys.stdin.readline())
ans = 0
for i in range(1, m):
    if(i+sum(list(map(int, str(i))))==m):
        ans = i
        break
print(ans)
