#ifndef LINKED_H
#define LINKED_H

typedef struct who_am_i
{
	char *name;
	struct who_am_i *next;	
} names_list;


#endif /* LINKED_H */