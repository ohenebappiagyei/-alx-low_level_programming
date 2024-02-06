#include <stdio.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a vcalue in sorted array using
 * Exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: The index where the value is located, or -1, if not present
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t low = bound / 2;
	size_t high = (bound < size - 1) ? bound : size - 1;
	size_t i;
	size_t mid;

	if (array == NULL)
		return (-1);

	if (size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", bound / 2,
			bound);

	while (low <= high)
	{
		printf("Searching in array: ");

		for (i = low; i <= high; i++)
		{
			if (i < high)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}

		mid = (low + high) / 2;

		printf("Searching in crazy: ");

		for (i = low; i <= high; i++)
		{
			if (i < high)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}


