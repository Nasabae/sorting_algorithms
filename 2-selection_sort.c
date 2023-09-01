#include "sort.h"

/**
*locate_min - locates the minimum indexin an array
*@array: Array of integers
*@index: Starts index
*@size: Size of the Array
*
* Return: minimum index of the array
*/

int locate_min(int *array, int index, size_t size)
{
int max, idx_min;
int i;

max = array[index];
idx_min = index;
for (i = index; i < (int)size; i++)
{
if (array[i] < max)
{
max = array[i];
idx_min = i;
}
}
if (idx_min == index)
return (-1);
return (idx_min);
}

/**
* selection_sort -  sorts an array of integers in ascending
* order using the Selection sort algorithm
* @array: an array of integers
* @size: size of array
*/

void selection_sort(int *array, size_t size)
{
int z;
int max, temp;

for (z = 0; z < (int)size; z++)
{
max = locate_min(array, z, size);
if (max != -1)
{
temp = array[z];
array[z] = array[max];
array[max] = temp;
print_array(array, size);
}
}
}
