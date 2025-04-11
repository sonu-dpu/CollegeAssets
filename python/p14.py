n = int(input("enter a number ::"))
elements=[]
for i in range(n):
    num = int(input(f"enter number {i+1} :: "))
    elements.append(num)
mylist = tuple(elements)
print(mylist)
print(max(mylist))
print(min(mylist))
print(sum(mylist))