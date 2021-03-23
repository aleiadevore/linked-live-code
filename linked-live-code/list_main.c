#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "linked.h"

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

int main(void)
{
	names_list *head = NULL, *node = NULL;
	char name[50];
	int i = 0;

	while (i < 3)
	{
		printf("What is your name?\n");
		scanf("%s", name);
		printf("Your name is %s\n", name);
		head = new_node(head, name);
		i++;
	}
	for (node = head; node != NULL; node = node->next)
		printf("%s\n", node->name);
	while (head)
	{
		node = head;
		head = head->next;
		free(node->name);
		free(node);
	}
	return 1;
}