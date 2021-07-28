num = int(input())
anagram_list = []
check_list = []

for i in range(num):
    anagram_input = input().split()
    anagram_list.append(anagram_input)

for j in range(num):
    #if len(anagram_list[j][0]) == len(anagram_list[j][1]):
    for k in range(len(anagram_list[j][0])):
        for l in range(len(anagram_list[j][1])):
            if anagram_list[j][0][k] == anagram_list[j][1][l]:
                word = anagram_list[j][1][l]
                anagram_list[j][0].replace(word,'')
                continue
            else:
                check_list.append('NOT anagrams.')
                break

    check_list.append('anagrams.')
                    
    # else: 
    #     check_list.append('NOT anagrams.')

for m in range(num):
    print(anagram_list[m][0], '&', anagram_list[m][1], 'are', check_list[m])