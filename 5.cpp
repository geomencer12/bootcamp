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

void printLinkedList(int n) {
  Node *curr = head;
  int count=0;                     
  while(curr) { 
    if(count==n) {
      printf("%d\n", curr->value);
      return;
    }
    count++; 
    curr = curr->next; 
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

 
 int i;
  printf("Input i :\n");
  scanf("%d",&i);
  printf("The %dth Node from the end is : ",i);
  printLinkedList(n-i);
}