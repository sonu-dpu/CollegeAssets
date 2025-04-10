n = int(input("enter a number :: "))
elements = []

for i in range(n):
    num = int(input(f"enter a number {n+1}"))
    elements.append(num)
tup = tuple(elements)
mid=n//2
print("first half :: ",tup[:mid])
print("last half :: ", tup[mid:] )
