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
	//selection sort
	for (int i = 0; i < len; i++) 
	{
		int min = i;
		for (int j = i + 1; j < len ; j++) 
		{
			if(a[j] < a[min])
			{
				min = j;
			}
		}
		int temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}

	for (int i = 0; i < len; ++i)
	{
		cout << a[i] << " ";
	}
}