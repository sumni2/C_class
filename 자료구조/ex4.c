#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "InsertLinkedList.h"

linkedList_h* createLinkedList_h(void)
{
    linkedList_h* L;
    L = (linkedList_h*)malloc(sizeof(linkedList_h));
    L ->head = NULL;
    return L;
}

void freeLinkedList_h(linkedList_h* L)
{
    listNode* p;
    while (L ->head != NULL)
    {
        p = L ->head;
        L ->head = L ->head ->link;
        free(p);
        p = NULL;
    }
}

void printList(linkedList_h* L)
{
    listNode* p;
    printf("L = (");
    p = L ->head;
    while (p =! NULL)
    {
        printf("%s", p->data);
        p = p ->link;
        if (p != NULL) printf(", ");
    }
    printf(") \n");
}

void insertFirstNode(linkedList_h *L, char *X)
{
    listNode* newNode;
    newNode = (listNode*)malloc(sizeof(listNode));
    strcpy(newNode ->data, X);
    newNode ->link = L ->head;
    L->head = newNode;
}

void insertLastNode(linkedList_h* L, char* X)
{
    listNode* newNode;
    listNode* temp;
    newNode = (listNode*)malloc(sizeof(listNode));
    strcpy(newNode ->data, X);
    newNode ->link = NULL;
    if (L ->head == NULL)
    {
        L ->head = newNode;
        return;
    }
    temp = L ->head;
    while (temp ->link != NULL) temp = temp ->link;
    temp ->link = newNode;
}

int main(void)
{
    linkedList_h* L;
    L = createLinkedList_h();
    printf("공백 리스트 생성하기! \n");
    printList(L);

    printf("\n리스트에 [1월] 노드 삽입하기!\n");
    insertFirstNode(L, "1월");
    printList(L);

    printf("\n리스트에 [2월] 노드 삽입하기!\n");
    insertLastNode(L, "2월");
    printList(L);

    printf("\n리스트에 [3월] 노드 삽입하기!\n");
    insertLastNode(L, "3월");
    printList(L);

    printf("\n리스트에 [4월] 노드 삽입하기!\n");
    insertLastNode(L, "4월");
    printList(L);

    printf("\n리스트에 [5월] 노드 삽입하기!\n");
    insertLastNode(L, "5월");
    printList(L);

    printf("\n리스트에 [6월] 노드 삽입하기!\n");
    insertLastNode(L, "6월");
    printList(L);

    printf("\n리스트에 [7월] 노드 삽입하기!\n");
    insertLastNode(L, "7월");
    printList(L);

    printf("\n리스트에 [8월] 노드 삽입하기!\n");
    insertLastNode(L, "8월");
    printList(L);

    printf("\n리스트에 [9월] 노드 삽입하기!\n");
    insertLastNode(L, "9월");
    printList(L);

    printf("\n리스트에 [10월] 노드 삽입하기!\n");
    insertLastNode(L, "10월");
    printList(L);

    printf("\n리스트에 [11월] 노드 삽입하기!\n");
    insertLastNode(L, "11월");
    printList(L);

    printf("\n리스트에 [12월] 노드 삽입하기!\n");
    insertLastNode(L, "12월");
    printList(L);

    printf("\n리스트 공간을 해제하여 공백 리스트로 만들기!\n");
    freeLinkedList_h(L);
    printList(L);

    getchar(); return 0;
}