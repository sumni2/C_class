#pragma once
typedef struct ListNode
{
    char data[12];
    struct ListNode* link;
} listNode;

typedef struct 
{
    listNode* head;
} linkedList_h;

linkedList_h* createLinkedList_h(void);
void freeLinkedList_h(linkedList_h* L);
void printList(linkedList_h * L);
void insertFirstNode(linkedList_h * L, char* X);
void insertLastNode(linkedList_h * L, char* X);