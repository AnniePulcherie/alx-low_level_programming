/*
 * File: 1-list_len.c
 */

#include "lists.h"

/**
 *
 * Return: The number of elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t element = 0;

	while (h)
	{
		element++;
		h = h->next;
	}

	return (element);
}
