#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nod;
listint_t *imp = *head;
nod = malloc(sizeof(listint_t));
if (!nod)
return (NULL);
nod->n = n;
nod->next = NULL;
if (*head == NULL)
{
*head = nod;
return (nod);
}
while (imp->next)
imp = imp->next;
imp->next = nod;
return (nod);
}
