#include<stdio.h>
#include<stdlib.h>
struct Node {
    int value;
    Node *next;
} *head1, *tail, *head2, *tail2;

Node *createNode(int value) {
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->value = value;
    temp->next = NULL;
    return temp;
}
void pushTail2(int value) {
    Node *temp = createNode(value);
    if(!head2) {
        head2 = tail2 = temp;
    }
    else {
        tail2->next = temp;
        tail2 = temp;
    }
}
void pushTail(int value) {
    Node *temp = createNode(value);
    if(!head1) {
        head1 = tail = temp;
    }
    else {
        tail->next = temp;
        tail = temp;
    }
}
void merge(){
    Node *curr = head2;
    while(curr) {
        pushTail(curr->value);
        curr = curr->next;
    }
}
void printLinkedList() {
  Node *curr = head1;                     
  while(curr) { 
    printf("%d\n", curr->value); 
    curr = curr->next; 
  }
}
int main()
{
    pushTail(1);
    pushTail(2);
    pushTail(3);
    pushTail2(4);
    pushTail2(5);
    pushTail2(6);
    merge();
    printLinkedList();
}