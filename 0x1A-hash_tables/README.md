# 0x1A C - Hash tables

## Overview

In this project, we delve into the implementation of hash tables in the C programming language. Hash tables are fundamental data structures used for efficient key-value pair storage and retrieval. This project encompasses various tasks, including creating a hash table, implementing hash functions, adding and retrieving elements, printing the hash table, and handling collisions.

## Task List

### Task 0: >>> ht = {}

Write a function that creates a hash table.

- **Prototype:** `hash_table_t *hash_table_create(unsigned long int size);`
- Returns a pointer to the newly created hash table.
- If something went wrong, your function should return NULL.

### Task 1: djb2

Write a hash function implementing the djb2 algorithm.

- **Prototype:** `unsigned long int hash_djb2(const unsigned char *str);`
- You are allowed to copy and paste the function from the provided specification.

### Task 2: key -> index

Write a function that gives you the index of a key.

- **Prototype:** `unsigned long int key_index(const unsigned char *key, unsigned long int size);`
- Returns the index at which the key/value pair should be stored in the array of the hash table.

### Task 3: >>> ht['betty'] = 'cool'

Write a function that adds an element to the hash table.

- **Prototype:** `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`
- Returns: 1 if it succeeded, 0 otherwise.
- In case of collision, add the new node at the beginning of the list.

### Task 4: >>> ht['betty']

Write a function that retrieves a value associated with a key.

- **Prototype:** `char *hash_table_get(const hash_table_t *ht, const char *key);`
- Returns the value associated with the element, or NULL if key couldn’t be found.

### Task 5: >>> print(ht)

Write a function that prints a hash table.

- **Prototype:** `void hash_table_print(const hash_table_t *ht);`
- Prints the key/value in the order that they appear in the array of hash table.

### Task 6: >>> del ht

Write a function that deletes a hash table.

- **Prototype:** `void hash_table_delete(hash_table_t *ht);`

### Task 7: $ht['Betty'] = 'Cool' (Advanced)

For this task, we implement ordered hash tables using sorted linked lists.

- Rewrite the previous functions using the provided data structures: `shash_table_t`, `shash_node_t`.
- Implement functions such as `shash_table_create`, `shash_table_set`, `shash_table_get`, `shash_table_print`, `shash_table_print_rev`, and `shash_table_delete`.

## Conclusion

The completion of this project reinforces understanding of hash tables, hash functions, and collision resolution techniques. Implementing these fundamental data structures in C provides a solid foundation for handling and managing data efficiently in various applications.

