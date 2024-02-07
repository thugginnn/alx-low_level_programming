# C - Search Algorithms

## Introduction

This project covers various search algorithms implemented in C programming language. Each algorithm is designed to efficiently search for a target value in a given data structure.

## Tasks

1. **Linear search**
   - File: `0-linear.c`
   - Description: Searches for a value in an array of integers using linear search.
   - Returns: Index of the first occurrence of the value, or -1 if not found.

2. **Binary search**
   - File: `1-binary.c`
   - Description: Searches for a value in a sorted array of integers using binary search.
   - Returns: Index of the value if found, or -1 if not found.

3. **Big O #0**
   - File: `2-O`
   - Description: Text file containing the worst-case time complexity of linear search.

4. **Big O #1**
   - File: `3-O`
   - Description: Text file containing the worst-case space complexity of iterative linear search.

5. **Big O #2**
   - File: `4-O`
   - Description: Text file containing the worst-case time complexity of binary search.

6. **Big O #3**
   - File: `5-O`
   - Description: Text file containing the worst-case space complexity of binary search.

7. **Space complexity**
   - File: `6-O`
   - Description: Text file containing the space complexity of a specific algorithm.

8. **Jump search**
   - File: `100-jump.c`
   - Description: Searches for a value in a sorted array of integers using jump search.
   - Returns: Index of the value if found, or -1 if not found.

9. **Big O #5**
   - File: `101-O`
   - Description: Text file containing the average-case time complexity of jump search.

10. **Interpolation search**
    - File: `102-interpolation.c`
    - Description: Searches for a value in a sorted array of integers using interpolation search.
    - Returns: Index of the value if found, or -1 if not found.

11. **Exponential search**
    - File: `103-exponential.c`
    - Description: Searches for a value in a sorted array of integers using exponential search.
    - Returns: Index of the value if found, or -1 if not found.

12. **Advanced binary search**
    - File: `104-advanced_binary.c`
    - Description: Searches for a value in a sorted array of integers using advanced binary search.
    - Returns: Index of the value if found, or -1 if not found.

13. **Jump search in a singly linked list**
    - File: `105-jump_list.c`
    - Description: Searches for a value in a sorted singly linked list of integers using jump search.
    - Returns: Pointer to the node containing the value, or NULL if not found.

14. **Linear search in a skip list**
    - File: `106-linear_skip.c`
    - Description: Searches for a value in a sorted skipped linked list of integers using jump search.
    - Returns: Pointer to the node containing the value, or NULL if not found.

15. **Big O #6**
    - File: `107-O`
    - Description: Text file containing the average time complexity of jump search in a singly linked list.

16. **Big O #7**
    - File: `108-O`
    - Description: Text file containing the average time complexity of jump search in a sorted skipped linked list.

## Data Structures

```c
/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 * for ALX project
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 * for Holberton project
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

