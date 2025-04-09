set1={1,2,3,4,5}
set2={5,6,7,8,9,3}
if(set==set2):
    print(F"{set1} and {set2} are equal")

else:
    print("sets are not equal")

symme=set1^set2
print(symme)
intersect=set1|set2
print(intersect)
print("max value from set1",max(set1))
print("min value from set1",min(set1))
print("max value from set2",max(set2))
print("min value from set2",min(set2))
