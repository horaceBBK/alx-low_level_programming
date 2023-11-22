
## C Programming - Singly Linked Lists

In this project, I will be learning about singly linked lists and implementing various operations on them using C programming language.

## Tasks

1. **Print a Linked List:**
    - Function prototype: `size_t print_listint(const listint_t *h)`
    - Return value: Number of nodes in the list
    - Format: Print each node's data on a separate line

2. **Count Linked List Elements:**
    - Function prototype: `size_t listint_len(const listint_t *h)`
    - Return value: Number of elements in the list
    - Functionality: Traverse the list and count the number of nodes

3. **Add Node at the Beginning:**
    - Function prototype: `listint_t *add_nodeint(listint_t **head, const int n)`
    - Return value: Address of the newly added node, or `NULL` if failed
    - Functionality: Create a new node, allocate memory, set its data and `next` pointer, and insert it at the beginning of the list

4. **Add Node at the End:**
    - Function prototype: `listint_t *add_nodeint_end(listint_t **head, const int n)`
    - Return value: Address of the newly added node, or `NULL` if failed
    - Functionality: Traverse the list to find the last node, create a new node, allocate memory, set its data and `next` pointer, and append it to the end of the list

5. **Free a Linked List:**
    - Function prototype: `void free_listint(listint_t *head)`
    - Functionality: Traverse the list, free each node's allocated memory, and set the `head` pointer to `NULL`

6. **Free a Linked List (Alternative):**
    - Function prototype: `void free_listint2(listint_t **head)`
    - Functionality: Similar to `free_listint`, but also sets the `head` pointer to `NULL` after freeing the list

### Additional Tasks

7. **Pop the Head Node:**
    - Function prototype: `int pop_listint(listint_t **head)`
    - Return value: Data of the popped node, or `0` if the list is empty
    - Functionality: Pop the head node, free its allocated memory, and update the `head` pointer

8. **Get Node at Index:**
    - Function prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)`
    - Return value: Address of the node at the specified index, or `NULL` if the index is out of bounds
    - Functionality: Traverse the list to reach the node at the given index

9. **Sum List Elements:**
    - Function prototype: `int sum_listint(listint_t *head)`
    - Return value: Sum of all data values in the list, or `0` if the list is empty
    - Functionality: Traverse the list and accumulate the data values

10. **Insert Node at Index:**
    - Function prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)`
    - Return value: Address of the newly inserted node, or `NULL` if the index is out of bounds or insertion fails
    - Functionality: Traverse the list to reach the position before the specified index, create a new node, allocate memory, set its data and `next` pointer, and insert it at the given index

11. **Delete Node at Index:**
    - Function prototype: `int delete_nodeint_at_index(listint_t **head, unsigned int index)`
    - Return value: `1` if the node was successfully deleted, or `-1` if the index is out of bounds or deletion fails
    - Functionality: Traverse the list to reach the position before the specified index, remove the node at the given index, and free its allocated memory

12. **Reverse Linked List:**
    - Function prototype: `listint_t *reverse_listint(listint_t **head)`
    - Return value: Pointer to the first node of the reversed list
    - Functionality: Reverse the linked list using two pointers, without using additional loops or memory allocation

13. **Print Linked List Safely:**
    - Function prototype: `size_t print_listint_safe(const listint_t *head)`
    - Return value: Number
