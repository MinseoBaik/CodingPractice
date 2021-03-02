# -*- coding: utf-8 -*-
"""
Created on Wed Dec 23 08:59:41 2020

@Author: minseo.baik
@File type: Spyder (Python 3.7)
@Description: To solve question #2750 from Baekjoon
              using quick sort algorithm.
@Note: Algorithms for partition and quickSort functions are
       deriven from GeeksfoGeeks 
       (https://www.geeksforgeeks.org/python-program-for-quicksort/)
"""
import sys
sys.setrecursionlimit(99999)

def partition(arr, low, high):
    i = low-1
    pivot = arr[high]
    
    for j in range(low, high):
        if arr[j]<=pivot:
            i+=1
            arr[i], arr[j] = arr[j], arr[i]
    arr[i+1], arr[high] = arr[high], arr[i+1]
    return (i+1)


def quickSort(arr, low, high):
    if len(arr)==1:
        return arr
    if(low<high):
        pi = partition(arr, low, high)
        quickSort(arr, low, pi-1)
        quickSort(arr, pi+1, high)

n=int(sys.stdin.readline())
stack = []
for i in range(n):
    stack.append(int(sys.stdin.readline()))

quickSort(stack, 0, n-1)
for i in stack:
    print(i)    
