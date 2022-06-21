#include "sort.h"

/**
 * bubble_sort - Sort an array with bubble algorithm.
 * @array: the array to sort.
 * @size: size of the array.
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, posicion = 0;
        int temporal1 = 0;

	if (!array || size < 2)
		return;

	while (i < (size - 1))
	{
		temporal1 = array[i];
		j = i + 1;
		while (j < size)
		{
			if (array[j] < temporal1)
			{
				posicion = j;
				temporal1 = array[j];
			}
			j++;
		}
		if (array[posicion] < array[i])
		{
			array[posicion] = array[i];
			array[i] = temporal1;
			print_array(array, size);
		}
		i++;
	}
}
