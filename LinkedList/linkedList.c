#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"


struct Node* createNode(int data){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

void insertAtFirst(struct Node** head , int data){

    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void insertAtPosition(struct Node** head, int data, int pos){
    if(pos == 0){
        insertAtFirst(head,data);
        return;
    }
    struct Node* newNode = createNode(data);
    struct Node* temp = *head;

    for(int i=0; temp != NULL && i<pos-1; i++){
        temp = temp->next;
    }
    if(temp == NULL){
        printf("Position out of range");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    

}

void insertAtEnd(struct Node** head, int data){

    struct Node* newNode = createNode(data);

    if(*head == NULL){
        *head = newNode;
        return;
    }
    
    struct Node* temp = *head;

    while(temp->next != NULL){
        temp = temp->next; 
    }

    temp->next=newNode;

}

void deleteFromFirst(struct Node** head){
    if(*head == NULL){
        printf("The list is empty");
        return;
    }

    struct Node* temp = *head;
    
    *head = temp->next;
    free(temp);
    temp = NULL;
}

void deleteFromPosition(struct Node** head, int pos){
    if(*head == NULL){
        printf("The list is empty");
        return;
    }
    if(pos == 0){
        deleteFromFirst(head);
    }

    struct Node* temp1 = *head;

    for(int i=0;temp1 != NULL && i < pos - 1; i++ ){
        temp1 = temp1->next;
    }
    if(temp1 == NULL){
        printf("Position out of range");
    }

    struct Node* temp2 = temp1->next; //connect to the next node of the current node (pos-1)

    temp1->next = temp2->next; //temp1 jumps to the next node of temp2
    temp2->next = NULL; //disconnect the node from 
    
    free(temp2); //free the space (it then destroy the node)
    temp2 = NULL;
}

void deleteFromEnd(struct Node** head){
    if(*head == NULL){
        printf("The list is empty");
        return;
    }
    
    struct Node* temp = *head;
    if(temp->next == NULL){ //if the list has only one node
        free(temp);
        *head = NULL;
    }else{
        while(temp->next->next != NULL){
            temp=temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void printList(struct Node* head){
    if(head == NULL){
        printf("the list is empty");
        return;
    }
    struct Node* temp = head;

    while(temp != NULL){
        printf("[%d] -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}