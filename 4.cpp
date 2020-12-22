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

void removeDup() {
    Node *curr = head;
    Node *temp;                     
    while(curr->next) { 
      if(curr->value == curr->next->value) { 
        temp = curr->next->next;
        free(curr->next);
        curr->next = temp;
      }
      else
        curr = curr->next;
    }
}

void printLinkedList() {
  Node *curr = head;                     
  while(curr) { 
    printf("%d->", curr->value); 
    curr = curr->next; 
  }
  printf("NULL");
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
    removeDup();
    printf("No dup: ");
    printLinkedList();
    printf("\n");
}