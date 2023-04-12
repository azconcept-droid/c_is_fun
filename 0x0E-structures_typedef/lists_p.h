#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

listint_t *add_node_at_start(listint_t **head, int n);
size_t print_list(listint_t *head);
listint_t *add_node_at_end(listint_t **h, int n);
listint_t *insert_node(listint_t **head, int number);
void free_list(listint_t *head);

#endif  /* LIST_H */