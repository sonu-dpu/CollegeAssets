n=int(input("enter a number :: "))
a,b=0,1
count =0 
while count<n:
    print(a, end=" \n")
    a,b=b,a+b
    count+=1