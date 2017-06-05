# 0x19 C - Hash Tables

### OBJECTIVES
* [] - Understand what a hash function is, what makes a good hash function
* [] - How do hash tables work and how to build and use them
* [] - What are collisions and what are the main ways of dealing with collisions in a hash table
* [] - Grasp the advantages and drawbacks of using hash tables
* [] - Learn what the most common use cases of hash tables are

##### GitHub repository: `holbertonschool-higher_level_programming`
##### Directory: `0x0B-python-input_output`

### FILE SETUP
All files are written and compiled on Ubuntu 14.04 LTS. Programs will be compiled using gcc 4.8.4 (C90) using the flags -Wall -Werror -Wextra and -pedantic. All files will end with a new line.

Code will use Betty style and will be checked using `betty-style.pl` and `betty-doc.pl`.

<a href="https://github.com/holbertonschool/Betty">Betty Style</a>

### Data structures used for this project:

```
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```
#### 0. >>> ht = {}
Function that creates a hash table. Returns a pointer to the newly created hash table. If something goes wrong, function returns `NULL`.

File name: `0-hash_table_create.c`
Main file: `0-main.c`
Prototype: `hash_table_t *hash_table_create(unsigned long int size):`

`size` is the size of the array`

#### 1. djb2
A hash function implementing the djb2 algorithm.

`djb2` algorithm:

This algorithm (k=33) was first reported by dan bernstein many years ago in comp.lang.c. another version of this algorithm (now favored by bernstein) uses xor: hash(i) = hash(i - 1) * 33 ^ str[i]; the magic of number 33 (why it works better than many other constants, prime or not) has never been adequately explained.

```
 unsigned long
    hash(unsigned char *str)
    {
        unsigned long hash = 5381;
        int c;

        while (c = *str++)
            hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

        return hash;
    }
```

File name: `1-djb2.c`
Main file: `1-main.c`
Prototype: `unsigned long int hash_djb2(const unsigned char *str):`

#### 2. Key -> index
A function that obtains the index of a key. Function uses the `hash_djb2` function in Task 1. Returns the index at which the key/value pair should be stored in the array of the hash table.

File name: `2-key_index.c`
Main file: `2-main.c`
Protoytpe: `unsigned long int key_index(const unsigned char *key, unsigned long int size):`

* [] - `key` is the key
* [] - `size` is the size of the array of the hash table

#### 3. >>> ht['betty'] = 'holberton'
A function that adds an element to the hash table. Returns 1 if succeeded, 0 otherwise. In the case of a collission, the new node is at the beginning of the list.

File name: `3-hash_table_set.c`
Main file: `3-main.c`
Prototype: `int hash_table_set(hash_tble_t *ht, const char *key, const char *value):`

#### 4. >>> ht['betty']
A function that retrieves a value associated with a key. Returns the value associated with the element, or `NULL` if `key` could not be found.

File name: `4-hash_table_get.c`
Main file: `4-main.c`
Prototype: `char *hash_table_get(const hash_table_t *ht, const char *key):`
* [] - `ht` is the hash table we look into
* [] - `key` is the key we look for

#### 5. >>> print(ht)
Function that prints a hash table. Prints the key/value pair in the order that they appear in the array of hash table.

File name: `5-hash_table_print.c`
Main file: `5-main.c`
Prototype: `void hash_table_print(const hash_table_t *ht):`

#### 6. >>> del ht
Function that deletes a hash table

File name: `6-hash_table_delete.c`
Main file: `6-main.c`
Prototype: `void hash_table_delete(hash_table_t *ht):`
