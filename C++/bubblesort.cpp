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

	for (int i = 0; i < len - 1; ++i)
	{
		for (int j = 0; j < len - 1 - i; ++j)
		{
			if(a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < len; ++i)
	{
		cout << a[i] << " ";
	}
}