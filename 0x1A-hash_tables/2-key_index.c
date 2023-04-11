#include "hash_tables.h"

/**
 * key_index - Function to return the index of a hashed key using hash_djb2 hash
 * @key: The key
 * @size: Size of the array of the hash table
 * Return: The index where the key/value pair is stored in hashtable array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
