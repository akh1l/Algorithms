#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int a[10];
	int len = sizeof(a)/ sizeof(*a);
	for (int i = 0; i < len; ++i)
	{
		a[i] = rand() % 100;
	}

	for (int i = 1; i < len; ++i)
	{
		int key = a[i];
		int j = i - 1;
		while(j >= 0 && a[j] > key)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}
	for (int i = 0; i < len; ++i)
	{
		cout << a[i] << " ";
	}
	return 0;
}