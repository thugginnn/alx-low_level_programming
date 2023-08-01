# C - More singly linked lists

In this project, you will continue practicing building and using singly linked lists in C.

## Header File 📁

**lists.h**: Header file containing definitions and prototypes for all types and functions written for the project.

| Type/File      | Definition/Prototype                       |
|----------------|--------------------------------------------|
| `struct listint_s` | `int n`<br>`struct listint_s *next`        |
| `typedef listint_t` | `struct listint_s`                        |

## Tasks

1. **Print list**
    - File: `0-print_listint.c`
    - Description: C function that prints all the elements of a `listint_t` linked list.
    - Returns: The number of nodes in the `listint_t` list.

2. **List length**
    - File: `1-listint_len.c`
    - Description: C function that returns the number of elements in a `listint_t` linked list.

3. **Add node**
    - File: `2-add_nodeint.c`
    - Description: C function that adds a new node at the beginning of a `listint_t` linked list.
    - Returns: If the function fails, it returns `NULL`. Otherwise, it returns the address of the new element.

4. **Add node at the end**
    - File: `3-add_nodeint_end.c`
    - Description: C function that adds a new node at the end of a `listint_t` linked list.
    - Returns: If the function fails, it returns `NULL`. Otherwise, it returns the address of the new element.

5. **Free list**
    - File: `4-free_listint.c`
    - Description: C function that frees a `listint_t` linked list.

6. **Free**
    - File: `5-free_listint2.c`
    - Description: C function that frees a `listint_t` linked list and sets the head to `NULL`.

7. **Pop**
    - File: `6-pop_listint.c`
    - Description: C function that deletes the head node of a `listint_t` linked list.
    - Returns: If the linked list is empty, it returns `0`. Otherwise, it returns the head node's data (`n`).

8. **Get node at index**
    - File: `7-get_nodeint.c`
    - Description: C function that locates a given node of a `listint_t` linked list.
    - Returns: If the node does not exist, it returns `NULL`. Otherwise, it returns the located node.

9. **Sum list**
    - File: `8-sum_listint.c`
    - Description: C function that returns the sum of all the data (`n`) of a `listint_t` linked list.
    - Returns: If the linked list is empty, it returns `0`. Otherwise, it returns the sum of all the data (`n`).

10. **Insert**
    - File: `9-insert_nodeint.c`
    - Description: C function that inserts a new node to a `listint_t` linked list at a given position.
    - Returns: If it is not possible to add the new node at index `idx`, or the function fails, it returns `NULL`. Otherwise, it returns the address of the new node.

11. **Delete at index**
    - File: `10-delete_nodeint.c`
    - Description: C function that deletes the node at a given index of a `listint_t` linked list.
    - Returns: If the function succeeds, it returns `1`. If the function fails, it returns `-1`.

12. **Reverse list**
    - File: `100-reverse_listint.c`
    - Description: C function that reverses a `listint_t` linked list using a maximum of one loop and two variables.
    - Returns: A pointer to the first node of the reversed list.

13. **Print (safe version)**
    - File: `101-print_listint_safe.c`
    - Description: C function that prints a `listint_t` linked list safely (i.e., can free lists containing loops).
    - Returns: The number of nodes in the `listint_t` list.

14. **Free (safe version)**
    - File: `102-free_listint_safe.c`
    - Description: C function that frees a `listint_t` linked list safely (i.e., can free lists containing loops).
    - Returns: The size of the list that was freed and sets the head to `NULL`.

15. **Find the loop**
    - File: `103-find_loop.c`
    - Description: C function that finds the loop contained in a `listint_t` linked list using a maximum of two variables.
    - Returns: If no loop is found, it returns `NULL`. Otherwise, it returns the address of the node where the loop starts.

