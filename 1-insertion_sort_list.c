#include "sort.h"
/**
 * insertion_sort_list - sort a lincked list using inserton algorithm
 * @list: pointer to the licked list struct
 * Return: void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *follow = (*list), *curr, *prec = (*list);

	for (curr = (*list); curr->next; curr = curr->next)
	{
		follow = curr->next;
		if (curr->n > follow->n)
		{
			if (curr->prev)
				curr->prev->next = follow;
			if (follow->next)
				follow->next->prev = curr;
			curr->next = follow->next;
			follow->next = curr;
			follow->prev = curr->prev;
			curr->prev = follow;
			print_list(*list);
			while (follow->prev)
			{
				prec = follow->prev;
				if (follow->n < prec->n)
				{
					if (follow->next)
						follow->next->prev = prec;
					if (prec->prev)
						prec->prev->next = follow;
					prec->next = follow->next;
					follow->next = prec;
					follow->prev = prec->prev;
					prec->prev = follow;
					if (prec == (*list))
						(*list) = follow;
					print_list(*list);
				}
				follow = prec;
			}
			curr = follow;
		}
	}

}
