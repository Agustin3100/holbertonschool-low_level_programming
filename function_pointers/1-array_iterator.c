/**
 * array_iterator - executes a function acording to action
 * @action: pointer to the functions
 * @size: size of the array
 * @array: array to iterate
 * Return: void
 */
#include <stdio.h>
void array_iterator(int *array, size_t size, void (*action)(int))
{

		size_t i;

		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}



}
