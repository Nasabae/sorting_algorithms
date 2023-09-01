#include "sort.h"

/**
* shell_sort - sorts an array of integers in ascending order
* using the Shell sort algorithm, using the Knuth sequence
* @array: array of integers
* @size: size of array
*/

void shell_sort(int *array, size_t size)
{
int o = 1, x, y;
int temp;

if (!array || !size || size < 2)
return;
while (o < (int)size / 3)
o = o * 3 + 1;
while (o > 0)
{
for (x = o; x < (int)size; x++)
{
temp = array[x];
y = x;
while (y > (o - 1) && array[y - o] >= temp)
{
array[y] = array[y - o];
y -= o;
}
array[y] = temp;
}
o = o / 3;
print_array(array, size);
}
}
