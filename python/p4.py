tuple=(1,2,3,4,5,6,7,8,2,7,8)

repeated_item = set()
for x in tuple:
    if tuple.count(x)>1:
        repeated_item.add(x)

print("repeatef item ::",repeated_item)