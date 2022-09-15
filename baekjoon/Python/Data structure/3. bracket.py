import sys
from timeit import repeat

repeat_number = int(sys.stdin.readline())

for i in range(repeat_number):
    bracketList = list(sys.stdin.readline())
    check = 0 # 괄호를 체크해줄 변수

    for i in bracketList:
        if i == "(":
            check += 1

        elif i == ")":
            check -= 1

        if check < 0:
            print('NO')
            break
    
    if check > 0:
        print('NO')

    elif check == 0:
        print('YES')