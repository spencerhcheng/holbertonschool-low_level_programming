# 0x12. C - More singly linked lists

## GOALS
Additional learning on using and building linked lists.

### DATA STRUCTURE USED FOR THIS PROJECT:

```c
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```

# TASKS

## 0. PRINT LIST
A function that prints all the elements of a `listint_t` list. Returns the number of nodes.

Prototype: `size_t print_listint(const listint_t *h);`

## 1. LIST LENGTH
A function that returns the number of elements in a linked `listint_t` list.

Prototype: `size_t listint_len(const listint_t *h);`

## 2. ADD NODE
A function that adds a new node at the beginning of a `listint_t` list. Returns the address of the new element or NULL if it failed.

Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`

## 3. ADD NODE AT THE END
A function that adds a new node at the end of a `listint_t` list.

Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`

## 4. FREE LIST
A function that frees a `listint_t` list.

Prototype: `void free_listint(listint_t *head);`

## 5. FREE
A function that frees a `listint_t` list. The function sets the head to NULL.

Prototype: `void free_listint2(listint_t **head);`

## 6. POP
A function that deletes the head node of a `listint_t` linked list, and returns the head node's data (n). If the linked list is empty, return 0.

Prototype: `int pop_listint(listint_t **head);`

## 7. GET NODE AT INDEX
A function that returns the nth node of a `listint_t` linked list. If the node does not exist, return NULL.

Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)`

## 8. SUM LIST
A function that returns the sum fo all the data (n) of a `listint_t` linked list. If the list is empty, return 0.

Prototype: `int sum_listint(listint_t *head);`

## 9. INSERT
A function that inserts a new node at a given position. Returns the address of the new node, or NULL if failed. If it is not possible to add the new node at index idx, the function does not add the new node and returns NULL.

Prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`

## 10. DELETE AN INDEX
A function that deletes the node at index `index` of a `listint_t` linked list. The index starts at 0 and returns 1 on success and -1 if failed.

Prototype: `int delete_nodeint_at_index(listint_t **head, unsigned int index);`

