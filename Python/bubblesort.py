import random

a = []
for i in range(10):
	a.append(int(random.random() * 100))
	
for i in range(len(a) - 1):
	for j in range(len(a) - i - 1):
		if a[j] > a[j + 1]:
			a[j + 1],a[j] = a[j],a[j + 1]
print(a)