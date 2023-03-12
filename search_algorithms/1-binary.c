#include "search_algos.h"
/**
 * binary_search - binary search
 * @array: array
 * @size: size of the array
 * @value: final value
 * Return: index corresponding to value, -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int start, end, mid, i;

	i = 0;
	mid = 0;
	start = 0;
	end = size - 1;

	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (start + end) / 2;

		if (array[mid] == value)
			return (mid);

		else if (array[mid] < value)
		{
			start = mid + 1;
		}
		else
		{
			end = mid + 1;
		}
	}
	return (-1);
}
