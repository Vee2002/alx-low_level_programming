#include "lists.h"

/**
 * list_t - returns the number of elements in a list
 * @h: Points to the head of the list
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
int nodes = 0;

while(h)
{
nodes += 1;
h = h -> next;
}
return (nodes);
}
