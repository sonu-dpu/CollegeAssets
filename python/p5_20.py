# def sumof(n):
#     return sum(range(n+1))
# print("sum of number is ",sumof(4))

def sum_of(n):
    total = 0
    for i in range(n+1):
        total +=i
    return total
n = int(input("enter a number::"))

print("sum od number ", sum_of(n))