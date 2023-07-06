#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int x;
listint_t *nod;
listint_t *imp = *head;
nod = malloc(sizeof(listint_t));
if (!nod || !head)
return (NULL);
nod->n = n;
nod->next = NULL;
if (idx == 0)
{
nod->next = *head;
*head = nod;
return (nod);
}
for (x = 0; imp && x < idx; x++)
{
if (x == idx - 1)
{
nod->next = imp->next;
imp->next = nod;
return (nod);
}
else
imp = imp->next;
}
return (NULL);
}
