#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define INCREMENT 1
#define DECREMENT -1

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;

void print_array(const int *, size_t);
void print_list(const listint_t *);
void ssa_bubble_sort(int *array, size_t size);
void ssa_insertion_sort_list(listint_t **list);
void ssa_selection_sort(int *array, size_t size);
void ssa_quick_sort(int *array, size_t size);
void ssa_quick_sort_rec(int *array, int lower, int higher, size_t size);
int ssa_lomuto_partition(int *array, int lower, int higher, size_t size);
void ssa_shell_sort(int *array, size_t size);
void ssa_counting_sort(int *array, size_t size);
void ssa_radix_sort(int *array, size_t size);
void ssa_bitonic_sort(int *array, size_t size);
void ssa_cocktail_sort_list(listint_t **list);
void ssa_swap_nodes(listint_t **list, listint_t *node);
listint_t *get_dlistint_lelem(listint_t *h);
int ssa_getCantRep(int num);

#endif
