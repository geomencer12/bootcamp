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
void printLinkedList(int size) {
  Node *curr = head;
  int counter=1;
  int mid=size/2;

  while(curr) { 
    if(counter==mid) {
        printf("%d\n", curr->value);
        return;
    }
    curr = curr->next; 
    counter++;
  }
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
    printf("The middle element is: ");
    printLinkedList(n);
  }

