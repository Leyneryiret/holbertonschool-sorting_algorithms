#include "sort.h"
/**
 * insertion_sort_list - Sorts a list through insertion sort algorithm
 * @list: List to sort represented on a doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *actual, *pre, *siguiente;

	if (!list || !(*list))
		return;

	actual = (*list);
	while (actual)
	{
		pre = actual->prev;
		siguiente = actual->next;
		while (pre)
		{
			if (actual->n < pre->n)
			{
				if (*list == pre)
					*list = actual;
				if (pre->prev)
					(pre->prev)->next = pre->next;
				if (actual->next)
					(actual->next)->prev = actual->prev;

				pre->next = actual->next;
				actual->next = pre;
				actual->prev = pre->prev;
				pre->prev = actual;

				print_list(*list);
				pre = actual->prev;
			}
			else
				break;
		}
		actual = siguiente;
	}
}
