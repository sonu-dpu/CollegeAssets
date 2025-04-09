sentence = "Python is easy to learn and Python is powerful"
words=sentence.split()
occ={occ:words.count(occ)for occ in words}
print(occ)
