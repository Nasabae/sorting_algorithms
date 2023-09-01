#include "sort.h"

/**
* bubble_sort -  sorts an array of integers in ascending order
* using the Bubble sort algorithm
*
* @array: array of integers
* @size: size of array
*/

void bubble_sort(int *array, size_t size)
{
size_t x, y;
int z;

if (size < 2)
return;
for (y = 0; y < size - 1; y++)
{
for (x = 0; x < size - y - 1; x++)
{
if (array[x] > array[x + 1])
{
z = array[x];
array[x] = array[x + 1];
array[x + 1] = z;
print_array(array, size);
}
}
}
}
