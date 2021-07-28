num = int(input())
code_list = []
mid_num = 0

for i in range(num):
    code = input().split()
    code_list.append(code)

    for j in range(len(code_list)):
        check1 = ''.join(code_list[i])
        check2 = ''.join(code_list[j])
        if check1 == check2[::-1]:
            
            secret_code = code_list[i]
            break

secret_code = ''.join(secret_code)

total_num = len(secret_code)
mid_num = (len(secret_code) // 2) + 1

print(total_num ,secret_code[mid_num-1])