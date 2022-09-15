import sys

init_list = list(sys.stdin.readline().rstrip())
num_repeat = int(sys.stdin.readline())

list_location = len(init_list)

for i in range(num_repeat):
    input_order = sys.stdin.readline().split()

    if input_order[0] == "L":
        if list_location == 1:
            print("pass")
            pass
        else:
            list_location -= 1
            print(list_location)


    elif input_order[0] == "D":
        if list_location == len(init_list):
            print("pass")
            pass

        else:
            list_location += 1
            print(list_location)

    elif input_order[0] == "B":
        init_list.pop(list_location - 1)
        print(init_list)
        list_location -= 1


    elif input_order[0] == "P":
        init_list.insert(list_location, input_order[1])
        print(init_list)
        list_location += 1