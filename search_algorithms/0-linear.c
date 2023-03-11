#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using
 *                 the linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: the first index where value is located, or -1 if the array is NULL
 *         or if the value is not found in the array
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL)
        return -1;

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);

        if (array[i] == value)
        {
            printf("Value found at index %ld\n", i);
            return i;
        }
    }

    return -1;
}
