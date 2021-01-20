"""
Created on Wed Jan 20 11:56:17 2021

@Author: minseo.baik
@File type: Spyder (Python 3.7)
@Description: To solve question #2798 from Baekjoon
              using brute force algorithm.
"""
import sys
import itertools

n, max_sum = map(int, sys.stdin.readline().split())
cards = list(map(int, sys.stdin.readline().split()))
total = 0
result = itertools.permutations(cards, 3)
for permutation in result:
    if(sum(permutation)<=max_sum and total<sum(permutation)):
        total = sum(permutation)
    if total == max_sum:
        break
print(total)
