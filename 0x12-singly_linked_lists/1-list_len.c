/*
 * File: 1-list_len.c
 * Auth : Annie
 */

#include "lists.h"

/**
 *
 *
 * list_len 
 * Return: The number of elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
