#ifndef NAMES_H
#define NAMES_H

typedef struct my_name
{
    char *name;
    struct my_name *next;
} names_list;

#endif /* NAMES_H */