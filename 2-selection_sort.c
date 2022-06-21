#include "sort.h"

/**
 * selection_sort - that sorts an array of integers in ascending
 * order using the Selection sort algorithm.
 * @array: the array to sort.
 * @size: size of the array.
 * Return: nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, posicion = 0;
	int temporal1 = 0, cambios = 0, aux = 0;

	if (!array || size < 2)
		return;

	while (i < (size - 1))
	{
		temporal1 = array[i];
		j = i + 1;
		while (j <= (size - 1))
		{
			if (array[j] < temporal1)
			{
				posicion = j;
				temporal1 = array[j];
				cambios++;
			}
			j++;
		}
		if (array[posicion] < array[i] && cambios > 0)
		{
			aux = array[i];
			array[i] = temporal1;
			array[posicion] = aux;
			print_array(array, size);
		}
		i++;
	}
}
