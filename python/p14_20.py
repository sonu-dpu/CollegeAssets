n=int(input("enter a number :: "))
is_prime = True
if n>1:
    for i in range(2,n):
        if n % i == 0:
            is_prime=False
            break
if is_prime:
    print("  prime number is ::",n)
else:
    print("is not prime number")