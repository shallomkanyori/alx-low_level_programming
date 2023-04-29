## C - More singly linked lists

- **Task 0: Print list.** Write a function that prints all the elements of a `listint_t` list and returns the number of nodes.

- **Task 1: List length.** Write a function that returns the number of elements in a linked `listint_t` list.

- **Task 2: Add node.** Write a function that adds a new node at the beginning of a `listint_t` list and returns the address of the new element, or `NULL` if it failed.

- **Task 3: Add node at the end.** Write a function that adds a new node at the end of a `listint_t` list and returns the address of the new element, or `NULL` if it failed.

- **Task 4: Free list.** Write a function that frees a `listint_t` list.

- **Task 5: Free.** Write a function that frees a `listint_t` list and sets the `head` to `NULL`.

- **Task 6: Pop.** Write a function that deletes the head node of a `listint_t` linked list, and returns the head node's data. If the linked list is empty, return `0`.

- **Task 7: Get node at index.** Write a function that returns the nth node of a `listint_t` linked list or `NULL` if the node does not exist

- **Task 8: Sum list.** Write a function that returns the sum of all the data of a `listint_t` linked list. If the list is empty, return `0`.

- **Task 9: Insert.** Write a function that inserts a new node at a given position and returns the address of the new node, or `NULL` if it failed. If it is not possible to add the new node at the given index, do not add the new node and return `NULL.`

- **Task 10: Delete at index.** Write a function that deletes the node at a given index of a `listint_t` linked list and returns `1` if it succeeds and `-1` if it fails.


- **Task 11: Reverse list.** Write a function that reverses a `listint_t` linked list and returns a pointer to the first node of the reversed linked list. You are not allowed to use more than one loop. You are not allowed to use `malloc`, `free` or arrays. You can declare a maximum of two variables in your function.

- **Task 12: Print (safe version).** Write a function that prints a `listint_t` linked list that may contain a loop and returns the number of nodes in the list. You should go through the list only once. If the function fails, exit the program with status `98`.

- **Task 13: Free (safe version).** Write a function that frees a `listint_t` list that may contain a loop and returns the size of the list that was free'd. You can go through the list only once. The function should set the `head` to `NULL`.

- **Task 14: Find the loop.** Write a function that finds the loop in a linked list and returns the address of the node where the loop starts, or `NULL` if there is no loop. You are not allowed to use `malloc`, `free` or arrays. You can only declare a maximum of two variables in your function.
