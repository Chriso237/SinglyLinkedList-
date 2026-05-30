#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

//Driver code
int main(){
    struct Node* head = NULL;

    insertAtFirst(&head, 10);
    printf("Linked list after inserting the node:10 at the beginning \n");
    printList(head);

    printf("Linked list after inserting the node:20 at the end \n");
    insertAtEnd(&head, 20);
    printList(head);

    printf("Linked list after inserting the node:5 at the end \n");
    insertAtEnd(&head, 5);
    printList(head);

    printf("Linked list after inserting the node:30 at the end \n");
    insertAtEnd(&head,30);
    printList(head);

    printf("Linked list after inserting the node:15 at position 2 \n");
    insertAtPosition(&head, 15, 2);
    printList(head);

    printf("Linked list after deleting the first node: \n");
    deleteFromFirst(&head);
    printList(head);

    printf("Linked list after deleting the last node: \n");
    deleteFromEnd(&head);
    printList(head);

    printf("Linked list after deleting the node at position 1: \n");
    deleteFromPosition(&head,1);
    printList(head);

    return 0;
}