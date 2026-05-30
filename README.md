# SinglyLinkedList-
This program is an implementation of a singly linked list using C language.

# Description
The program implements singly linked lists. it aims to strengthen my coding skills and comprehension of data structures and pointers.
we used C language because of the proximity with the hardware and the low level.
While implementing this code, i faced some challenges with pointers and memory management.
At the end of the first part of the project, i learned memory management, structures and pointers and data structures such as singly linked list for now.

# How to install and run the project
- Clone the repo
- open it with your favourite IDE (vsCode etc...)
- compile the files by writing:
  ### Mac users
  gcc main.c linkedlist.c -o << name of the file you want the files to be compiled to >> (mac users) then open the file

  ### Windows users(in the vsCode terminal)
  g++ main.c linkedlist.c -o << name of the file you want the files to be compiled to >> then enter
  and
  .\<<nameOfTheFile>>.exe then enter


# Algorithms for the functions of the code

  #### createNode
  creates a node of the singly linked list and returns it
  
  #### insertAtFirst
  - Create a new node.
  - If the linked list is empty set the new node as the Head  and return.
  - Connect the next pointer of this new node to the Head of the linked list.
  - Update the Head pointer and make it points to the new node

  #### insertAtPosition
  - Check if the position is 0.
  - If it is 0, call the insertAtFirst function to insert the node at the first position of the list.
  - Initialize a counter variable and a temporary pointer to traverse the linked list.
  - Iterate over the linked list to find the node before the insertion point (position - 1).
  - If the temporary pointer becomes NULL before reaching the desired position, the position is out of range. Return.
  - Create a new node.
  - Point the next pointer of the new node to the node present just after the temporary pointer.
  - Point the next pointer of the temporary node to the new node and return.

  #### insertAtEnd
  - Create a new Node.
  - If the list is empty, update the Head pointer to be this new node and then return.
  - Otherwise traverse till the last node of the singly linked list.
  - Connect next pointer of the last node to the new node.

  #### deleteFromFirst
  -Ensure that the Head of the linked list is not NULL; if it is, the list is empty, so return.
  -Create a temporary pointer and point it to the current Head of the list.
  -Update the current head of the singly linked list to the next node.
  -Point the next pointer of the temporary node to NULL to detach it from the singly linked list.
  -Delete the temporary node.

  #### deleteFromPosition
  -Check if the head pointer of the linked list is NULL.
  -If it is NULL, the linked list is empty, so return.
  -Check if the position is 0.
  -If it is 0, call the deleteFromFirst function to delete the first node.
  -Initialize a counter variable and a temporary pointer to traverse the linked list.
  -Iterate the linked list to find the node before the deletion point (position - 1).
  -If the temporary pointer becomes NULL before reaching the desired position the position is out of range. Return
  -Store the next node of the temporary pointer in a temporary pointer.
  -Update the next pointer of the temporary pointer to the next pointer of the node to be deleted.
  -Delete the node represented by the temporary pointer.

  #### deleteFromEnd
  -Ensure that the Head of the linked list is not NULL; if it is, the list is empty, so return.
  -If the singly linked list has only one node, delete the head node and point the head pointer to NULL.
  -Traverse till the second last node of the singly linked list.
  -Store the next node of the second last node in a temporary pointer.
  -Connect the next pointer of the second last node to NULL.
  -Delete the last node represented by the temporary pointer.

  #### printList
  -Check if the HEAD of the singly linked is is NULL or not. If NULL return back.
  -Set a temp pointer to the head of the singly linked list.
  -While temp pointer != NULL:
  -Print temp->data.
  -Move temp to temp->next
  

