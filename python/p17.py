str=input("enter a string :: ")
choice = input("entra ypur choise L or U ::")
if choice.upper() == 'U':
    print(str.upper())
elif choice.lower() == "l":
    print(str.lower())
else:
    print("not enter a valid input ")