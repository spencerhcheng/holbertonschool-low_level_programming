![Holberton_logo](https://i.imgur.com/1HeldQT.png)

### 0x01A. Sorting algorithms & Big O

#### Synopsis
The objective of this project is to gain familiarity with different types of sorting algorithms. Sorting algorithms are mostly used for placing elements of a list in a certain order; primarily in numerical or lexicographical order.

Efficient sorting is important for optimizing the use of other algorithms, such as searing or merging data.

Through this project, we will also be exposed to the concept of time complexity, space complexity and Big O notation.

Sorting algorithms explored:
* [] - Bubble sort
* [] - Insertion sort
* [] - Selection sort
* [] - Quick sort

#### Authors

Ekaterina Kalache: [github account](https://github.com/KatyaKalache), [twitter](https://twitter.com/KatyaKalache)

Spencer Cheng: [[github account](https://github.com/spencerhcheng), [twitter](https://twitter.com/spencerhcheng)



#### FILE SETUP
All files are written and compiled on Ubuntu 14.04 LTS. Programs will be compiled using gcc 4.8.4 (C90) using the flags -Wall -Werror -Wextra and -pedantic. All files will end with a new line.

Code will use Betty style and will be checked using `betty-style.pl` and `betty-doc.pl`.

<a href="https://github.com/holbertonschool/Betty">Betty Style</a>

#### Data structure for doubly linked list node:
```
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

#### Big O notation specification
For the sorting algorithms in this directory, the big O notation of the time complexity of the algorithm will be provided, specifying the best, average and worst case scenarios in the form `0(x)` where `x` specifies the time complexity.

#### Printing functions:

```
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
```
```
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
```

#### 0. Bubble sort
Function that sorts an array of integers in ascending order using the `Bubble sort` algorithm. The `list` is printed after each time an element is swapped.

Bubble sort, sometimes referred to as sinking sort, is a simple sorting algorithm that repeatedly steps through the list to be sorted, compares each pair of adjacent items and swaps them if they are in the wrong order. The pass through the list is repeated until no swaps are needed, which indicates that the list is sorted. The algorithm, which is a comparison sort, is named for the way smaller or larger elements "bubble" to the top of the list. Although the algorithm is simple, it is too slow and impractical for most problems even when compared to insertion sort. It can be practical if the input is usually in sorted order but may occasionally have some out-of-order elements nearly in position. [source: Wikipedia]

Expected output:
```
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

19, 48, 71, 99, 13, 52, 96, 73, 86, 7
19, 48, 71, 13, 99, 52, 96, 73, 86, 7
19, 48, 71, 13, 52, 99, 96, 73, 86, 7
19, 48, 71, 13, 52, 96, 99, 73, 86, 7
19, 48, 71, 13, 52, 96, 73, 99, 86, 7
19, 48, 71, 13, 52, 96, 73, 86, 99, 7
19, 48, 71, 13, 52, 96, 73, 86, 7, 99
19, 48, 13, 71, 52, 96, 73, 86, 7, 99
19, 48, 13, 52, 71, 96, 73, 86, 7, 99
19, 48, 13, 52, 71, 73, 96, 86, 7, 99
19, 48, 13, 52, 71, 73, 86, 96, 7, 99
19, 48, 13, 52, 71, 73, 86, 7, 96, 99
19, 13, 48, 52, 71, 73, 86, 7, 96, 99
19, 13, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 7, 73, 86, 96, 99
13, 19, 48, 52, 7, 71, 73, 86, 96, 99
13, 19, 48, 7, 52, 71, 73, 86, 96, 99
13, 19, 7, 48, 52, 71, 73, 86, 96, 99
13, 7, 19, 48, 52, 71, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
```

Prototype: `void bubble_sort(int *array, size_t size);`
File: `0-bubble_sort.c`
Big O notation: `0-O`

#### 1. Insertion sort
Function that sorts a doubly linked list of integers in ascending order using the `insertion sort` algorithm. Nodes are swapped rather than modifying the integer `n` of a node. The `list` is printed each time an element is swapped. 

Insertion sort is a simple sorting algorithm that builds the final sorted array (or list) one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort. However, insertion sort provides several advantages:

Simple implementation: Jon Bentley shows a three-line C version, and a five-line optimized version:
* Efficient for (quite) small data sets, much like other quadratic sorting algorithms
* More efficient in practice than most other simple quadratic (i.e., O(n2)) algorithms such as selection sort or bubble sort
* Adaptive, i.e., efficient for data sets that are already substantially sorted: the time complexity is O(nk) when each element in the input is no more than k places away from its sorted position
* Stable; i.e., does not change the relative order of elements with equal keys
* In-place; i.e., only requires a constant amount O(1) of additional memory space
* Online; i.e., can sort a list as it receives it
* When people manually sort cards in a bridge hand, most use a method that is similar to insertion sort.
[source: Wikipedia]

Expected output:
```
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

19, 48, 71, 99, 13, 52, 96, 73, 86, 7
19, 48, 71, 13, 99, 52, 96, 73, 86, 7
19, 48, 13, 71, 99, 52, 96, 73, 86, 7
19, 13, 48, 71, 99, 52, 96, 73, 86, 7
13, 19, 48, 71, 99, 52, 96, 73, 86, 7
13, 19, 48, 71, 52, 99, 96, 73, 86, 7
13, 19, 48, 52, 71, 99, 96, 73, 86, 7
13, 19, 48, 52, 71, 96, 99, 73, 86, 7
13, 19, 48, 52, 71, 96, 73, 99, 86, 7
13, 19, 48, 52, 71, 73, 96, 99, 86, 7
13, 19, 48, 52, 71, 73, 96, 86, 99, 7
13, 19, 48, 52, 71, 73, 86, 96, 99, 7
13, 19, 48, 52, 71, 73, 86, 96, 7, 99
13, 19, 48, 52, 71, 73, 86, 7, 96, 99
13, 19, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 7, 73, 86, 96, 99
13, 19, 48, 52, 7, 71, 73, 86, 96, 99
13, 19, 48, 7, 52, 71, 73, 86, 96, 99
13, 19, 7, 48, 52, 71, 73, 86, 96, 99
13, 7, 19, 48, 52, 71, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
```

Prototype: `void insertion_sort_list(listint_t **list);`
File: `1-insertion_sort_list.c`
Big O notation: `1-0`

#### 2. Selection sort
Function that sorts an array of integers in ascending order using the `quick sort` algorithm. The `list` is printed each time an element is swapped.

The selection sort algorithm divides the input list into two parts: the sublist of items already sorted, which is built up from left to right at the front (left) of the list, and the sublist of items remaining to be sorted that occupy the rest of the list. Initially, the sorted sublist is empty and the unsorted sublist is the entire input list. The algorithm proceeds by finding the smallest (or largest, depending on sorting order) element in the unsorted sublist, exchanging (swapping) it with the leftmost unsorted element (putting it in sorted order), and moving the sublist boundaries one element to the right.
[source: Wikipedia]

Expected output:
```
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

7, 48, 99, 71, 13, 52, 96, 73, 86, 19
7, 13, 99, 71, 48, 52, 96, 73, 86, 19
7, 13, 19, 71, 48, 52, 96, 73, 86, 99
7, 13, 19, 48, 71, 52, 96, 73, 86, 99
7, 13, 19, 48, 52, 71, 96, 73, 86, 99
7, 13, 19, 48, 52, 71, 73, 96, 86, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
```

Prototype: `void selection_sort(int *array, size_t size);`
File: `2-selection_sort.c`
Big O notation: `2-0`

#### 3. Quick sort
Function that sorts an array of integers in ascending order using the `quick sort` algorithm. The `Lomuto` partition scheme is implemented and the pivot is always the last element of the partition being sorted. The `list` is printed each time an element is swapped.

uicksort (sometimes called partition-exchange sort) is an efficient sorting algorithm, serving as a systematic method for placing the elements of an array in order. Developed by Tony Hoare in 1959[1] and published in 1961,[2] it is still a commonly used algorithm for sorting. When implemented well, it can be about two or three times faster than its main competitors, merge sort and heapsort.[3]

Quicksort is a comparison sort, meaning that it can sort items of any type for which a "less-than" relation (formally, a total order) is defined. In efficient implementations it is not a stable sort, meaning that the relative order of equal sort items is not preserved. Quicksort can operate in-place on an array, requiring small additional amounts of memory to perform the sorting.

Mathematical analysis of quicksort shows that, on average, the algorithm takes O(n log n) comparisons to sort n items. In the worst case, it makes O(n2) comparisons, though this behavior is rare.
[source: Wikipedia]

```
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

7, 48, 99, 71, 13, 52, 96, 73, 86, 19
7, 13, 99, 71, 48, 52, 96, 73, 86, 19
7, 13, 19, 71, 48, 52, 96, 73, 86, 99
7, 13, 19, 71, 48, 52, 96, 73, 86, 99
7, 13, 19, 71, 48, 52, 96, 73, 86, 99
7, 13, 19, 71, 48, 52, 96, 73, 86, 99
7, 13, 19, 71, 48, 52, 96, 73, 86, 99
7, 13, 19, 71, 48, 52, 96, 73, 86, 99
7, 13, 19, 71, 48, 52, 96, 73, 86, 99
7, 13, 19, 71, 48, 52, 96, 73, 86, 99
7, 13, 19, 71, 48, 52, 96, 73, 86, 99
7, 13, 19, 71, 48, 52, 96, 73, 86, 99
7, 13, 19, 71, 48, 52, 96, 73, 86, 99
7, 13, 19, 71, 48, 52, 73, 96, 86, 99
7, 13, 19, 71, 48, 52, 73, 86, 96, 99
7, 13, 19, 71, 48, 52, 73, 86, 96, 99
7, 13, 19, 71, 48, 52, 73, 86, 96, 99
7, 13, 19, 71, 48, 52, 73, 86, 96, 99
7, 13, 19, 71, 48, 52, 73, 86, 96, 99
7, 13, 19, 48, 71, 52, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
```

Prototype: `void quick_sort(int *array, size_t size);`
File: `3-quick_sort.c`
Big O notation: `3-0`

#### 4. Big O #0
Time complexity of the following function:
```
void f(int n)
{
    printf("n = %d\n", n);
}
```

#### 5. Big O #1
Time complexity of the following algorithm:

```
void f(int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("[%d]\n", i);
    }
}
```

#### 6. Big O #2
Time complexity of the following function:

```
void f(int n)
{
    int i;

    for (i = 0; i < n; i += 98)
    {
        printf("[%d]\n", i);
    }
}
```

#### 7. Big O #3
Time complexity of the following function:
```
void f(unsigned int n)
{
    int i;

    for (i = 1; i < n; i = i * 2)
    {
        printf("[%d]\n", i);
    }
}
```

#### 8. Big O #4
Time complexity of the following algorithm:
```
var factorial = function(n) {
    if(n == 0) {
        return 1
    } else {
        return n * factorial(n - 1);
    }
}
```

#### 9. Big O #5
Time complexity of the following algorithm:
```
foreach($numbers as $number)
{
    echo $number;
}
```

#### 10. Big O #6
Time complexity of the following algorithm:
```
void f(unsigned int n)
{
    int i;
    int j;

    for (i = 0; i < n; i++)
    {
        for (j = 1; j < n; j = j * 2)
        {
            printf("[%d] [%d]\n", i, j);
        }
    }
}
```

#### 11. Big O #7
Time complexity of the following algorithm:
```
void f(int n)
{
    int i;
    int j;

    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (j = 0; j < n; j = j * 2)
            {
                printf("[%d] [%d]\n", i, j);
            }
        }
        else
        {
            for (j = 0; j < n; j = j + 2)
            {
                printf("[%d] [%d]\n", i, j);
            }
        }
    }
}
```

#### 12. Big O #8
Time complexity of the following algorithm:
```
int Fibonacci(int number)
{
    if (number <= 1) return number;

    return Fibonacci(number - 2) + Fibonacci(number - 1);
}

```

#### 13. Big O #9
Time complexity of the following algorithm:
```
def func(n):
    a=5
    b=6
    c=10
    for i in range(n):
        for j in range(n):
            x = i * i
            y = j * j
            z = i * j
    for k in range(n):
        w = a*k + 45
        v = b*b
    d = 33
```

#### 14. Big O #10
Time complexity of the following algorithm:
```
void f(int n)
{
     int i;
     int j;

     for (i = 0; i < n; i++)
     {
          for (j = i + 1; j < n; j++)
          {
               printf("[%d] [%d]\n", i, j);
          }
     }
}
```

#### 15. Big O #Arrays
Time complexity of the following on an unsorted array:
* Accessing the nth element
* Inserting at index n
* Removing at index n
* Searching for an element in an array of size n
* Setting value at index n

#### 16. Big O #Singly linked lists
Time complexity of the following on a singly linked list:
* Accessing the nth element
* Inserting after the nth element (Considering a pointer to the node to insert)
* Removing the nth element (Considering a pointer to the node to remove)
* Searching for an element in a linked list of size n
* Setting the value of the nth element (Considering a pointer to the node to set the value of)

#### 17. Big O #Doubly linked lists
Time complexity of the following on a doubly linked list:
* Accessing the nth element
* Inserting after the nth element (Considering a pointer to the node to insert)
* Removing the nth element (Considering a pointer to the node to remove)
* Searching for an element in a linked list of size n
* Setting the value of the nth element (Considering a pointer to the node to set the value of)

#### 18. Big O #Python 3 lists
Time complexity of the following on an unsorted `Python 3` list:
* Accessing the nth element
* Inserting at index n
* Removing at index n
* Searching for an element in a Python list of size n
* Setting value at index n

#### 19. Big O #Stacks 
Time complexity of the following on a stack:
* push
* pop
* Searching for an element in a stack of size n

#### 20. Big O #Queues
Time complexity of the following on a queue:
* push
* pop
* Searching for an element in a queue of size n

#### 21. Big O #Hash tables
Time complexity of the following on a hash table:
* Searching for an element, best case
* Searching for an element, worst case
* Insertion, best case
* Insertion, worst case
* Deletion, best case
* Deletion, worst case







