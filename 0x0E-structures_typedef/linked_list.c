#include "lists_p.h"

listint_t *add_node_at_start(listint_t **head, int n)
{
    listint_t *new;

    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return NULL;

    new->n = n;
    new->next = *head;
    *head = new;

    return (new);
}

listint_t *add_node_at_end(listint_t **h, int n)
{
    listint_t *new;
    listint_t *current;

    current = *h;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return NULL;

    new->n = n;
    new->next = NULL;

    if (*h == NULL)
    {
        *h = new;
    }
    else
    {
        while (current->next != NULL)
            current = current->next;
        current->next = new;
    }
    return (new);
}

size_t print_list(listint_t *head)
{
    listint_t *current;
    size_t n;

    current = head;
    n = 0;

    while (current != NULL)
    {
        printf("[%i]-->", current->n);
        current = current->next;
        n++;
    }
    printf("NULL\n");
    return (n);
}

/*listint_t *insert_node(listint_t **head, int number)
{
    listint_t *new;
    listint_t *current;

    current = *head;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    new->n = number;

    if (*head == NULL)
    {
        new->next = *head;
        *head = new;
    }
    else
    {
        while (current->next != NULL)
        {
            if (current->n < number)

            current = current->next;
        }
    }

    return (new);
}
*/
void free_list(listint_t *head)
{
    listint_t *current;

    while (head != NULL)
    {
        current = head;
        head = head->next;
        free(current);
    }
}
