def solution(n):
    answer = ''
    divided = n
    while(divided>0):
        if divided%3 == 1:
            answer = '1'+answer
        elif divided%3 == 2:
            answer = '2'+answer
        elif divided%3 == 0:
            answer = '4'+answer
            divided-=1
        divided = divided//3     
    return answer
