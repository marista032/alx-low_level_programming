Task 0: Write a function that creates a hash table.

Prototype: hash_table_t *hash_table_create(unsigned long int size);

where size is the size of the array

Task 1: Write a hash function implementing the djb2 algorithm.

Prototype: unsigned long int hash_djb2(const unsigned char *str);

 

Task 2: Write a function that gives you the index of a key.

Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size);

where key is the key

and size is the size of the array of the hash table

Task 3: Write a function that adds an element to the hash table.

Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value); Where ht is the hash table you want to add or update the key/value to; key is the key. key can not be an empty string and value is the value associated with the key. value must be duplicated. value can be an empty string





Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);

where ht is the hash table you want to look into

and key is the key you are looking for

Returns the value associated with the element, or NULL if key couldn’t be found

Task 4:  Write a function that retrieves a value associated with a key.

Task 5: Write a function that prints a hash table.

Task 6: Write a function that deletes a hash table.

Task 7: Rewrite the previous functions using these data structures:

shash_table_t *shash_table_create(unsigned long int size);

int shash_table_set(shash_table_t *ht, const char *key, const char *value);

char *shash_table_get(const shash_table_t *ht, const char *key);

void shash_table_print(const shash_table_t *ht);

Should print the hash table using the sorted linked list

void shash_table_print_rev(const shash_table_t *ht);

Should print the hash tables key/value pairs in reverse order using the sorted linked list

void shash_table_delete(shash_table_t *ht);


