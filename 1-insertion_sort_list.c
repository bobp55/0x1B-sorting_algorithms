#include "sort.h"
void print_list_rev(const listint_t *list)
{
	int i;


	while(list->next)
		list= list->next;

	i = 0;
	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		++i;
		list = list->prev;
	}
	printf("\n");
}
/**
 *
 *
 *
 **/
void insertion_sort_list(listint_t **list)
{
	listint_t *head_tmp1, *head_tmp2, *aux1, *aux2;
//	int counter = 0, counter2 = 0;
	int flag;

	head_tmp1 = *list;
	head_tmp2 = *list;
	while(head_tmp1->next)
	{
//		printf("principal:%d\n", counter2++);
//		if (counter2 == 20)
//			break;
		if (head_tmp1->next)
		{
			flag = 0;
//			printf("%d\n", head_tmp1->n);
			head_tmp2 = head_tmp1;
			while(head_tmp2 && head_tmp2->n > head_tmp2->next->n)
			{
//				printf("interno:%d\n", counter++);
				aux1 = head_tmp2;
				aux2 = head_tmp2->next;
				aux1->next = aux2->next;
				if (aux2->next)
				{
					aux2->next->prev = aux1;
				}
				if (aux2)
				{
					aux2->prev = aux1->prev;
					aux2->next = aux1;
				}
				if (aux1)
				{
					aux1->prev = aux2;
				}
				if (aux2->prev)
				{
					aux2->prev->next = aux2;
				}
				head_tmp2 = aux2->prev;
				if (!aux2->prev)
					*list = aux2;
				print_list(*list);
				flag = 1;
	//			print_list_rev(*list);
			}
		}
		if (flag == 0)
			head_tmp1 = head_tmp1->next;
	}
}
