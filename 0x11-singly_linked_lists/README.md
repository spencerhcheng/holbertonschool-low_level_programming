# 0x11. C - Singly linked lists

## GOALS
The goals of this project is to learn how to build and use linked lists and learning when and why to use linked lists versus arrays.

### DATA STRUCTURE USED FOR THIS PROJECT:

```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```

# TASKS

## 0. PRINT LIST
This function prints all the elements of a `list-t` list. It returns the number of nodes in the list.

Prototype: `size_t print_list(const list_t *h);

## 1. LIST LENGTH
This function returns the number of elements in a linked `list_t` list.

Prototype `size_t list_len(const list_t *h);`

## 2. ADD NODE
This function adds a new node at the beginning of a list_t list. The function will return the address of the new element, or NULL if failed.

Prototype `list-t *add_node(list_t **head, const char *str);

## 3. ADD NODE AT THE END
A function that adds a new node at the end of a list_t list. Returns the address of the new element, or NULL if failed.

Prototype: `list_t *add_node_end(list_t **head, const char *str);

## 4. FREE LIST
A function that frees a list_t list.

Prototype: void free_list(list_t *head);
