//PTA——链表

#include <stdio.h>
#include <stdlib.h>
typedef int datatype;
typedef struct node
{
    datatype data;
    struct node *next;
}LNode, *LinkList;

void split(LinkList *L,LinkList *A,LinkList *B) {
    LNode *t;
    t = (*L)->next;
    *A = *L;
    (*B)->next = NULL;
    
    while (t) {
        (*A)->next = t;
        t = t->next;
        (*B)->next = t;
    }
}

void sort(LinkList *L) {
    int arr[100];
    LNode *t;
    t = (*L)->next;
    int k;
    for (k=0; ; k++) {
        arr[k] = t->data;
        t = t->next;
    }
    for (int i=0; i < k-1; i++) {
        for (int j=0; j < k-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    t = (*L)->next;
    for (int i=0; ; i++) {
        t->data = arr[i];
        t = t->next;
    }
}

LNode *mergeTwoLists(LNode *A, LNode *B){
    LNode *pre,*(*L);
    if(!A)
    {
        return B;
    }
    else if(!B)
    {
        return A;
    }
    (*L) = (LNode *)malloc(sizeof(LNode));
    (*L)->next = NULL;
    pre = (*L);
    do
    {
        if(!A || !B)
        {
            pre->next = A==NULL ? B : A;
            return (*L)->next;
        }
        if(A->data < B->data)
        {
            pre->next = A;
            pre = A;
            A = A->next;
        }
        else
        {
            pre->next = B;
            pre = B;
            B = B->next;
        }
    } while(pre);

    return (*L)->next;
}

LNode* partition(LNode* (*L), int x){

    LNode *smallhead,*largehead,*t,*small,*large;
    smallhead = (LNode *)malloc(sizeof(LNode));
    largehead = (LNode *)malloc(sizeof(LNode));
    smallhead->next = NULL;
    largehead->next = NULL;
    small = smallhead;
    large = largehead;
    t = (*L);
    while(t)
    {
        if(t->data < x)
        {
            small->next = t;
            small = t;
        }
        else
        {
            large->next = t;
            large = t;
        }
        t = t->next;
    }
    small->next = largehead->next;
    large->next = NULL;

    return smallhead->next;
}


int main()
{
    
}