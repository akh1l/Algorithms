# prime generator using sieve of eratosthenes
number_of_primes = 29
touched = [False] * (number_of_primes + 1)
primes = []

for i in range(2, number_of_primes + 1, 2):
	touched[i] = True

# for(i = 3; i <= sqrt(number_of_primes); i++)
for i in range(3, int(number_of_primes ** 0.5) + 1):
	if not touched[i]:
		# for (int j = i * i; j <= n; j = j + (i * 2))
		for j in range(i * i, number_of_primes + 1, i * 2):
			touched[j] = True

primes.append(2)
for i in range(2, number_of_primes + 1):
		if not touched[i]:
			primes.append(i)

print primes
