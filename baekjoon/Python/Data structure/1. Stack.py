import sys

n_repeat = int(sys.stdin.readline())
my_list  = []

for i in range(n_repeat):
    value_input = sys.stdin.readline().split()
    
    if value_input[0] == "push":
        my_list.append(value_input[1])

    elif value_input[0] == "pop":
        if len(my_list) > 0:
            print(my_list[len(my_list)-1])
            my_list.pop()

        elif len(my_list) == 0:
            print("-1")

    elif value_input[0] == "size":
        print(len(my_list))

    elif value_input[0] == "empty":
        if len(my_list) > 0:
            print("0")
        elif len(my_list) == 0:
            print("1")

    elif value_input[0] == "top":
        if len(my_list) > 0:
            print(my_list[len(my_list)-1])
        elif len(my_list) == 0:
            print("-1")