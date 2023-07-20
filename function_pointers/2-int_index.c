#include "main.h"
/**
 * int_index -  a function that searches for an integer.
 * @array: array
 * @size: the size of array
 * @cmp: the ptr
 * Return: return (-1)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	for (int i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
