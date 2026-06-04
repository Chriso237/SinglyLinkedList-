#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
}Node;

Node* createNode(int data);
void insertAtFirst(Node** head, int data);
void insertAtEnd(Node** head,int data);
void insertAtPosition(Node** head,int data, int pos);
void deleteAtFirst(Node** head);
void deleteAtEnd(Node** head);
void deleteAtPosition(Node** head,int pos);
void forwardTraversal(Node* head);
void reverseTraversal(Node* head);




#endif

