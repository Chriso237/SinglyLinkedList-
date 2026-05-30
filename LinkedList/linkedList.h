#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data);
void insertAtFirst(struct Node** head, int data);
void insertAtPosition(struct Node** head, int data,int pos);
void insertAtEnd(struct Node** head, int data);
void deleteFromFirst(struct Node** head);
void deleteFromPosition(struct Node** head,int pos);
void deleteFromEnd(struct Node** head);
void printList(struct Node* head);



#endif