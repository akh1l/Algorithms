#include <iostream>
#include <cstdlib>
using namespace std;

void merge(int a[], int aux[], int low, int mid, int high)
{
	for (int i = low; i <= high; ++i)
	{
		aux[i] = a[i];
	}
	int i = low, j = mid + 1;

	for (int k = low; k <= high; ++k)
	{
		if(i > mid)
		{
			a[k] = aux[j++];
		}	
		else if(j > high)
		{
			a[k] = aux[i++];
		}
		else if(aux[i] > aux[j])
		{
			a[k] = aux[j++];
		}
		else
		{
			a[k] = aux[i++];
		}
	}
}

int merge_sort(int a[], int aux[], int low, int high)
{
	if(low < high)
	{
		int mid = (low + high) / 2;
		merge_sort(a, aux, low, mid);
		merge_sort(a, aux, mid + 1, high);
		merge(a, aux, low, mid, high);
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
	merge_sort(a, aux, 0, len - 1);
	for (int i = 0; i < len; ++i)
	{
		cout << a[i] << " ";
	}
}