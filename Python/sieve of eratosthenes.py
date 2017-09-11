# prime generator using sieve of eratosthenes
N = 29
touched = [False] * (N + 1)
primes = []

for i in range(2, N + 1, 2):
	touched[i] = True

# for(i = 3; i <= sqrt(N); i++)
for i in range(3, int(N ** 0.5) + 1):
	if not touched[i]:
		# for (int j = i * i; j <= n; j = j + (i * 2))
		for j in range(i * i, N + 1, i * 2):
			touched[j] = True

primes.append(2)
for i in range(2, N + 1):
		if not touched[i]:
			primes.append(i)

print primes
