def solution(myString):
    parts = myString.split('x')
    filtered = [s for s in parts if s]
    return sorted(filtered)
