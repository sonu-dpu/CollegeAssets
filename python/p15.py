text=input("entrer a string :: ").lower()
if text == text[::-1]:
    print("string is palindrome",text)
else:
    print("string is not palinderome",text)    