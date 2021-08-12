repeat_num = int(input())
reverse_word = []
for i in range(repeat_num):
    word = input().split()
    for j in range(len(word)):
        r_word = word[j][::-1]
        reverse_word.append(r_word)
    print(' '.join(reverse_word))
    reverse_word.clear()