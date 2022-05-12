import sys

n_repeat = int(sys.stdin.readline())
n_list   = []

for i in range(n_repeat):
    input_order = sys.stdin.readline().split()

    if input_order[0] == 'push':
        n_list.append(input_order[1])

    elif input_order[0] == 'pop':
        print(n_list.pop() if len(n_list) > 0 else -1)

    elif input_order[0] == 'size':
        print(len(n_list))

    elif input_order[0] == 'empty':
        print(0 if len(n_list) > 0 else 1)

    elif input_order[0] == 'top':
        print(n_list[len(n_list)-1] if len(n_list) > 0 else -1)