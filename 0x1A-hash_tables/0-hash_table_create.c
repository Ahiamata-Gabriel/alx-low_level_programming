#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table with value submitted
 * @size: unsigned long int the size of the table
 * Return: hash_table_t* pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr;

	if (size == 0)
		return (NULL);
	ptr = calloc(1, sizeof(hash_table_t));
	if (!ptr)
		return (NULL);
	ptr->size = size;
	ptr->array = calloc(size, sizeof(hash_node_t *));
	if (!ptr->array)
	{
		free(ptr);
		return (NULL);
	}

	return (ptr);
}
