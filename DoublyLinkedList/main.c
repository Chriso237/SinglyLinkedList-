#include <stdio.h>
#include <stdlib.h>
#include "doublyLinkedList.h"

int main(){

    Node* head = NULL;
    
    insertAtFirst(&head,1);
    printf("After adding new element at the beginning:\n");
    forwardTraversal(head);
    
    insertAtEnd(&head,10);
    printf("After adding new element at the end:\n");
    forwardTraversal(head);
    
    insertAtEnd(&head,3);
    printf("After adding new element at the end:\n");
    forwardTraversal(head);
    
    insertAtEnd(&head,35);
    printf("After adding new element at the end:\n");
    forwardTraversal(head);
    
    insertAtFirst(&head,125);
    printf("After adding new element at the beginning:\n");
    forwardTraversal(head);

    insertAtPosition(&head, 32, 4);
    printf("After adding at position 4:\n");
    forwardTraversal(head);

    insertAtPosition(&head, 12, 6);
    printf("After adding at positon 6:\n");
    forwardTraversal(head);

    insertAtPosition(&head, 9, 1);
    printf("After adding at positon 1:\n");
    forwardTraversal(head);

    deleteAtFirst(&head);
    printf("After deleting at the beginning:\n");
    forwardTraversal(head);

    deleteAtEnd(&head);
    printf("After deleting at the end:\n");
    forwardTraversal(head);

    deleteAtPosition(&head,4);
    printf("After deleting at the position 4:\n");
    forwardTraversal(head);

    deleteAtPosition(&head,1);
    printf("After deleting at the position 1:\n");
    forwardTraversal(head);

    forwardTraversal(head);
    reverseTraversal(head);

    

    return 0;
}