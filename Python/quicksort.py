import random as r
a = []
# inserting random numbers into the list
for i in range(10):
	a.append(int(r.random() * 10000))


# hoare partitoin
def partition(a, low, high):
	i, j = low + 1, high
	while True:
		while a[i] < a[low]:
			if i == high:
				break
			i += 1

		while a[low] < a[j]:
			if j == low:
				break
			j -= 1

		if i >= j:
			break
		a[i], a[j] = a[j], a[i]
	a[j], a[low] = a[low], a[j]
	return j


def quick_sort(a, low, high):
	if low < high:
		mid = partition(a, low, high)
		quick_sort(a, low, mid - 1)
		quick_sort(a, mid + 1, high)


quick_sort(a, 0, len(a) - 1)

print a