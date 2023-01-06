#ifndef HASH_TABLES
#define HASH_TABLES

#include <stdlib.h>
#include "structs.h"

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);

#endif /* HASH_TABLES */