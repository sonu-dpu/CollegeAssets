def vowels(s):
    s=s.lower()
    if "a" in s and "e" in s and "i" in s and "o" in s and "u" in s:
        return True
    else:
        return False
text=input("enter a srt :: ")

if(vowels(text)):
    print("The string contain all vowels")
else:
    print("string not conatin vowels")