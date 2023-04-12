#include "lists_p.h"

int main(void)
{
    listint_t *head;
    size_t n;   /*number of nodes*/

    head = NULL;

    add_node_at_end(&head, 0);
    add_node_at_end(&head, 9);
    add_node_at_end(&head, 13);
    add_node_at_end(&head, 36);
    add_node_at_end(&head, 52);
    add_node_at_end(&head, 102);
    add_node_at_end(&head, 2048);

    n = print_list(head);

    printf("New number of nodes %lu\n", n);

    /*add_node_at_start(&head, 3);
    add_node_at_start(&head, 5);
    add_node_at_start(&head, 10);
    add_node_at_start(&head, 45);
    add_node_at_start(&head, 67);
    add_node_at_start(&head, 98);
    add_node_at_start(&head, 1024);

    n = print_list(head);

    printf("Number of nodes %lu\n", n);

    printf("---------------------------\n");

    add_node_at_end(&head, 0);
    add_node_at_end(&head, 9);
    add_node_at_end(&head, 13);
    add_node_at_end(&head, 36);
    add_node_at_end(&head, 52);
    add_node_at_end(&head, 102);
    add_node_at_end(&head, 2048);

    n = print_list(head);

    printf("New number of nodes %lu\n", n);*/


    free_list(head);
    return (0);
}
