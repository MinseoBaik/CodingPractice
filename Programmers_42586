import math

def solution(progresses, speeds):
    answer = []
    days = []
    for i in range(len(progresses)):
        days.append(int(math.ceil((100-progresses[i])/speeds[i])))
    cnt = 1
    for i in range(len(days)):
        if i==0:
            max_date = days[i]
        elif days[i]<=max_date:
            cnt+=1
        elif days[i]>max_date:
            answer.append(cnt)
            cnt = 1
            max_date = days[i]
    answer.append(cnt)
    return answer
