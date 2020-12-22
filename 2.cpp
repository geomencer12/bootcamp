#include <stdio.h>
#include <stdlib.h>
struct Node {
    int value;
    Node *next;
} *head, *tail;

Node *createNode(int value) {
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->value = value;
    temp->next = NULL;
    return temp;
}
void pushTail(int value) {
    Node *temp = createNode(value);
    if(!head) {
        head = tail = temp;
    }
    else {
        tail->next = temp;
        tail = temp;
    }
        //  tail->next = head; //cycle
}
void checkCycle()
{
    if(tail->next==NULL){
        printf("Not cycle\n");
    }
    else if(tail -> next==head){
        printf("Cycle\n");
    }
}
int main()
{
    pushTail(1);
    pushTail(2);
    pushTail(3);
    pushTail(4);
    checkCycle();
}