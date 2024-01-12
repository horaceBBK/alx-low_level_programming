# 0x17 C - Doubly Linked Lists

In this project, I will be tackling the following tasks related to doubly linked lists in C. The tasks are designed to enhance my understanding and proficiency in handling doubly linked lists within a C programming environment.

## Tasks Overview

Each task focuses on different operations involving doubly linked lists, ranging from printing elements, adding and deleting nodes, to solving more complex challenges.

### Task 0: Print Elements of Doubly Linked List

- **Prototype:** `size_t print_dlistint(const dlistint_t *h);`
- **Return:** the number of nodes
- **Description:** I will implement a function to print all the elements of a `dlistint_t` list.

### Task 1: Number of Elements in Linked List

- **Prototype:** `size_t dlistint_len(const dlistint_t *h);`
- **Return:** the number of elements in a linked `dlistint_t` list.
- **Description:** I will create a function to retrieve the number of elements in a linked `dlistint_t` list.

### Task 2: Add Node at the Beginning

- **Prototype:** `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
- **Return:** the address of the new element, or NULL if it failed.
- **Description:** I will implement a function to add a new node at the beginning of a `dlistint_t` list.

### Task 3: Add Node at the End

- **Prototype:** `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
- **Return:** the address of the new element, or NULL if it failed.
- **Description:** I will create a function to add a new node at the end of a `dlistint_t` list.

### Task 4: Free Doubly Linked List

- **Prototype:** `void free_dlistint(dlistint_t *head);`
- **Description:** I will implement a function to free a `dlistint_t` list.

### Task 5: Get Nth Node

- **Prototype:** `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
- **Return:** the nth node of a `dlistint_t` linked list, or NULL if the node does not exist.
- **Description:** I will create a function to return the nth node of a `dlistint_t` linked list.

### Task 6: Sum of Elements in Linked List

- **Prototype:** `int sum_dlistint(dlistint_t *head);`
- **Return:** the sum of all the data (n) of a `dlistint_t` linked list. If the list is empty, return 0.
- **Description:** I will implement a function to return the sum of all the data in a `dlistint_t` linked list.

### Task 7: Insert Node at Given Position

- **Prototype:** `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
- **Return:** the address of the new node, or NULL if it failed.
- **Description:** I will create a function to insert a new node at a given position in a `dlistint_t` list.

### Task 8: Delete Node at Given Index

- **Prototype:** `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
- **Return:** 1 if it succeeded, -1 if it failed.
- **Description:** I will implement a function to delete the node at a given index in a `dlistint_t` linked list.

### Task 9: Find the Password for crackme4

- **Save the password in the file:** `100-password`
- **File Content:** The exact password, no new line, no extra space.
- **Hint:** The program prints “OK” when the password is correct.

### Task 10: Largest Palindrome from 3-Digit Products

- **Save the result in the file:** `102-result`
- **File Content:** The exact result, no new line, no extra space.
- **Description:** I will find the largest palindrome made from the product of two 3-digit numbers.

### Task 11: Write a Keygen for crackme5

- **Usage for the crackme:** `./crackme5 username key`
- **Segfault:** The crackme will segfault if the correct key for the user is not entered.
- **Keygen Usage:** `./keygen5 username`
- **Description:** I will write a keygen that prints a valid key for the given username.


Feel free to use this README as a guide to understand the files in this directory while working on the tasks in the 0x17 project.

