tup = (1,2,3,4,5,1,4)
repeted=[]
for i in set(tup):
    if tup.count(i)>1:
        repeted.append(i)
print("repeded tuple is :: ",repeted)