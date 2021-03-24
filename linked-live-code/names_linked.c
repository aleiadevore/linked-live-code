#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "names.h"

names_list *new_node(names_list *head, char *name)
{
    names_list *node = head, *new = NULL;

    new = malloc(sizeof(names_list));
    if (new == NULL)
        return (NULL);
    new->name = strdup(name);
    new->next = NULL;
    
    if (head == NULL)
    {
        head = new;
        return (new);
    }
    while (node->next != NULL)
        node = node->next;
    node->next = new;
    return (head);
}

void print_list(names_list **head)
{
    names_list *node = *head;

    while (node)
    {
        printf("%s\n", node->name);
        node = node->next;
    }
}

void free_names(names_list *head)
{
    names_list *node = NULL;

    while (head != NULL)
    {
        node = head;
        head = head->next;
        free(node->name);
        free(node);
    }
}

int main(void)
{
    names_list *head = NULL;
    char name[50];

    while (1)
    {
        printf("What is your name?\n");
        scanf("%s", name);
        printf("Your name is %s\n", name);
        if (name[0] == 'X')
            break;
        /* Save name to node */
        head = new_node(head, name);
    }
    print_list(&head);
    printf("\n\n");
    print_list(&head);
    free_names(head);

    return (0);
}