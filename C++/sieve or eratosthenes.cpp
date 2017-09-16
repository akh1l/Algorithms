#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	int n = 100;
	bool touched[n];
	vector<int> primes;

	for (int i = 2; i <= n; i += 2)
	{
		touched[i] = true;
		touched[i - 1] = false;
	}
	for (int i = 3; i <= sqrt(n); ++i)
	{
		if(!touched[i])
		{
			for (int j = i * i; j <= n; j = j + (i * 2))
			{
				touched[j] = true;
			}
		}
	}
	primes.push_back(2);
	for (int i = 2; i <= n; ++i)
	{
		if(!touched[i])
		{
			primes.push_back(i);
		}
	}

	for (std::vector<int>::iterator i = primes.begin(); i != primes.end(); ++i)
	{
		cout << *i << " ";
	}
	return 0;
}