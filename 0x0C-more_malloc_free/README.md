# Automatic and Dynamic Memory Allocation in C: Understanding `malloc` and `free`

Welcome to this README, where we explore the concepts of automatic and dynamic memory allocation in C, with a specific focus on the `malloc` and `free` functions. Understanding how to allocate and manage memory is essential for developing efficient and flexible C programs.

## Automatic vs. Dynamic Memory Allocation

### Automatic Memory Allocation

In C, automatic memory allocation refers to the allocation of memory within the program's stack frame. Variables with automatic storage duration are created and destroyed as function calls are made and completed. These variables typically have a fixed size known at compile time.

### Dynamic Memory Allocation

Dynamic memory allocation, on the other hand, allows programs to allocate memory at runtime, providing flexibility for data structures whose size is not known in advance. Dynamic memory is allocated on the heap, and it's the programmer's responsibility to manage it properly.

## The `malloc` Function

The `malloc` (memory allocation) function is a key tool for dynamic memory allocation. It allows you to allocate a block of memory of a specified size on the heap. `malloc` returns a pointer to the first byte of the allocated memory, which can be used to access and manipulate the memory.

### Example:
```c
int *array = (int *)malloc(5 * sizeof(int));
if (array == NULL) {
    // Handle memory allocation failure
} else {
    // Use the allocated memory
}
Let's get started!!!!