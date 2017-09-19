import random

a = []
for i in range(10):
	a.append(int(random.random() * 100))
	
for i in range(len(a)):
	key = a[i]
	j = i - 1
	while j >= 0 and a[j] > key:
		a[j + 1] = a[j]
		j -= 1
	a[j + 1] = key 
print(a)