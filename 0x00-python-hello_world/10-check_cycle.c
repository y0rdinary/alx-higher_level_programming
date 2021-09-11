#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle -  a function that checks if a singly linked list has a cycle in it
 * @list: the singly linked lists.
 * Return: always 0.
 */

int check_cycle(listint_t *list)
{
  listint_t *due = list;
  listint_t *rag = list;

  if (list == NULL)
    return (0);

  while (due && due->next)
    {
      rag = rag->next;
      due = due->next->next;

      if (rag == due)
	return (1);
    }
  return (0);
}
