#include <stdio.h>
#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array using advanced binary search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where the value is located, or -1 if not present
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid = (low + high) / 2;
	size_t i;
	
	if (low > high)
		return -1;
	
	printf("Searching in array: ");
	
	for (i = low; i <= high; i++)
	{
		if (i < high)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
	
	if (array[mid] == value)
	
	{
		if (mid == low || array[mid - 1] != value)
			return mid;
		return advanced_binary_recursive(array, low, mid - 1, value);
	}
	else if (array[mid] > value)
		return advanced_binary_recursive(array, low, mid - 1, value);
	else
		return advanced_binary_recursive(array, mid + 1, high, value);
}

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return -1;
	
	return advanced_binary_recursive(array, 0, size - 1, value);
}

