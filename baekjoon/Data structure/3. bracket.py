num_repeat = int(input())
for i in range(num_repeat):
    bracket_list = list(input())
    score = 0
    for i in bracket_list:
        if i == "(":
            score += 1
        elif i == ")":
            score -= 1

        if score < 0:
            print('No')
            break

    if score > 0:
        print('No')
    elif score == 0:
        print('Yes')