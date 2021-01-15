# -*- coding: utf-8 -*-
"""
Created on Wed Jan 15 14:10:10 2021

@Author: minseo.baik
@File type: Spyder (Python 3.7)
@Description: To solve question #2751 from Baekjoon
              using quick sort algorithm.
@Note: Algorithms for partition and quickSort functions are
       deriven from GeeksfoGeeks 
       (https://www.geeksforgeeks.org/python-program-for-quicksort/)
"""
import sys
import random
sys.setrecursionlimit(99999)

def partition(arr, low, high):
    i = low-1
    pivot = arr[high]
    
    for j in range(low, high):
        if(arr[j]<pivot):
            i+=1
            arr[i], arr[j] = arr[j], arr[i]
    arr[i+1], arr[high] = arr[high], arr[i+1]
    return (i+1)


def quickSort(arr, low, high):
    if len(arr)==1:
        return arr
    
    if low<high: 
        pi = partition(arr, low, high)
        quickSort(arr, low, pi-1)
        quickSort(arr, pi+1, high)

n=int(sys.stdin.readline().rstrip())
stack = [int(sys.stdin.readline().rstrip()) for i in range(n)]
random.shuffle(stack) #this is a temporary solution to avoid worst case input (having the smallest or the biggest number in the last index of the stack)
quickSort(stack, 0, n-1)
for i in stack:
    print(i)
