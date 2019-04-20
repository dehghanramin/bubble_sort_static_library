//Bubble sort

#include "bubble_sort.hpp"

void bubble_sort(int a[])
{
	const int LENGTH = sizeof(a)/sizeof(*a);
	for (int t = LENGTH ; t > 0; --t)
	{
		for (int s = 1; s < t - 1; ++s)
		{
			if (a[s - 1] > a[s])
			{
				int temp = a[s];
				a[s] = a[s-1];
				a[s-1] = temp;
			}
		}
	}
}
