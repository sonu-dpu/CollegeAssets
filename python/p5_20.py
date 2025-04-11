data = {'1': ['a', 'b'], 2: ['c', 'd']}

list1 = data['1']   # string key
list2 = data[2]     # integer key

for i in list1:
    for j in list2:
        print(i + j)
