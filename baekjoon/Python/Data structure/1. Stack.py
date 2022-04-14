import sys
repeat_num = int(sys.stdin.readline())
append_list = []

for i in range(repeat_num):
    num = sys.stdin.readline().split()

    if num[0] == 'push':
        append_list.append(num[1])

    elif num[0] == 'pop':
            print(append_list.pop() if append_list else -1)

    elif num[0] == 'size':
        print(len(append_list))

    elif num[0] == 'empty':
        if len(append_list) == 0:
            print('1')
        else:
            print('0')

    elif num[0] == 'top':
        if len(append_list) == 0:
            print('-1')
        else:
            print(append_list[-1])