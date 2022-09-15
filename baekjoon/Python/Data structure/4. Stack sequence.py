from inspect import stack
from queue import Empty
import sys

repeat_num = int(sys.stdin.readline())

in_stack = []
out_stack = []
checkOutput = 0
count = 1

for i in range(repeat_num):
    stack_num = int(sys.stdin.readline())

    while count <= stack_num:
        in_stack.append(count)
        out_stack.append("+")
        count += 1

    if in_stack[-1] == stack_num:
        in_stack.pop()
        out_stack.append("-")

    else:
        print("NO")
        checkOutput = 1
        break

if checkOutput == 0:
    for j in out_stack:
        print(j)
