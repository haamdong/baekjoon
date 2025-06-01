def solution(my_string, m, c):
    answer = ''
    idx = 0
    for i in my_string:
        if idx % m + 1 == c:
            answer += i
        idx += 1
    return answer