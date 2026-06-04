#include <stdio.h>
#include <stdlib.h>
#include "doublyLinkedList.h"

Node* createNode(int data){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    return newNode;
}

void insertAtFirst(Node** head, int data){
    Node* newNode = createNode(data);
    if(*head == NULL){
        *head = newNode;
        return;
    }

    newNode->next = *head;
    (*head)->prev = newNode;
    *head = newNode;
}

void insertAtEnd(Node** head, int data){
    Node* newNode = createNode(data);
    if(*head == NULL){
        *head = newNode;
        return;
    }
    Node* temp = *head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    newNode->prev = temp;
    temp->next = newNode;
    newNode = NULL;
}

void insertAtPosition(Node** head, int data, int pos){
    Node* newNode = createNode(data);
    if(*head == NULL){
        *head = newNode;
        return;
    }

    if(pos == 1){
        insertAtFirst(head,data);
        return;
    }

    Node* temp = *head;

    for(int i=1; temp != NULL && i < pos; i++){
        temp = temp->next;
    }

    if(temp == NULL){
        printf("Position out of range\n");
        free(newNode);
        return;
    }
    if(temp->next == NULL){
        insertAtEnd(head, data);
        return;
    }
    
    temp->prev->next = newNode;
    newNode->prev = temp->prev;
    newNode->next = temp;
    temp->prev = newNode;

}

void deleteAtFirst(Node** head){
    if(*head == NULL){
        printf("List already empty");
        return;
    }
    Node* temp = *head;

    if((*head)->next == NULL){
        *head = NULL; 
    }else{
        *head = (*head)->next;
        (*head)->prev = NULL;
        temp->next = NULL;
    }

    free(temp);


  
}

void deleteAtEnd(Node** head){
    if(*head == NULL){
        printf("List already empty");
        return;
    }

    Node* temp = *head;

    if(temp->next == NULL){
        *head = NULL;
        free(temp);
        return;
    }

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->prev->next = NULL;
    free(temp);

}

void deleteAtPosition(Node** head,int pos){
    if(*head == NULL){
        printf("List already empty");
        return;
    }

    if(pos == 1){
        deleteAtFirst(head);
        return;
    }

    Node* temp = *head;
    for(int i = 1; temp != NULL && i < pos; i++){
        temp = temp->next;
    }

    if(temp == NULL){
        printf("Position out of range\n");
        return;
    }

    if(temp->next == NULL){
        deleteAtEnd(head);
        return;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    free(temp);
}

void forwardTraversal(Node* head){
    Node* temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void reverseTraversal(Node* head){
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}