#include <iostream>
#include <cstdlib>
using namespace std;

int partition(int a[], int low, int high)
{
	int i = low, j = high + 1;
	while(true)
	{
		while(a[++i] < a[low])
		{
			if(i == high)
				break;
		}
		while(a[low] < a[--j])
		{
			if(j == low)
				break;
		}
		if(i >= j)
			break;
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	int temp = a[low];
	a[low] = a[j];
	a[j] = temp;
	return j;
}

void quick_sort(int a[], int low, int high)
{
	if(low < high)
	{
		int j = partition(a, low, high);
		quick_sort(a, low, j - 1);
		quick_sort(a, j + 1, high);
	}
}

int main()
{
	int a[10], aux[10];
	int len = sizeof(a)/ sizeof(*a);
	for (int i = 0; i < len; ++i)
	{
		a[i] = rand() % 100;
	}
	quick_sort(a, 0, len - 1);
	for (int i = 0; i < len; ++i)
	{
		cout << a[i] << " ";
	}
}