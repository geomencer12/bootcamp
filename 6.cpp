#include<stdio.h>
#include<stdlib.h>
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
}

void printLinkedList() {
  Node *curr = head;                     
  while(curr) { 
    printf("%d->", curr->value);
    curr = curr->next;
  }
  printf("NULL\n");
}

void Rev() {
  Node *curr= head;
  Node *prev=NULL;
  Node *newnext;

  while(curr) {
    newnext=curr->next; /*1 2 3 4 5 6*/
     curr->next=prev; /*6 5 4 3 2 1*/
    prev=curr;
    curr=newnext;
  }

  head=prev;
}

int main() {
  int n;
  printf("Size:");
  scanf("%d",&n);
  int nilai;  printf("Value:\n");
for (int t=0;t<n;t++){

  scanf("%d",&nilai);
  pushTail(nilai);
}
  Rev();
  printf("The sorted(descending) linked list:\n");
  printLinkedList();
  printf("\n");
}