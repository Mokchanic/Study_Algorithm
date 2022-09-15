repeat_num = int(input()) # 입력할 문장의 갯수
reverse_word = [] # 빈 list를 하나 생성
for i in range(repeat_num): # 입력을 받은 값 만큼 반복
    word = input().split() # 문장을 입력받으며 띄어쓰기로 나눠서 list로 받음
    for j in range(len(word)): # 문장을 나눠받은 list의 갯수 만큼 반복을 함
        r_word = word[j][::-1] # 문장을 나눠받은 list의 순서대로 단어를 뒤집음
        reverse_word.append(r_word) # 뒤집은 단어를 위에서 생성한 빈 list에 추가
    print(' '.join(reverse_word)) # list로 나눠진 단어를 .join을 사용하여 하나로 합침
    reverse_word.clear() # list를 clear로 비워줌