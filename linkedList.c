#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node * next;
};

void push(struct node **head, int data){
  struct node *new_node = (struct node *)malloc(sizeof(struct node));
  new_node->data = data;
  new_node->next = *head;
  *head = new_node;
}

void insertAfter(struct node * prev_node, int data){
  struct node *new_node = (struct node *)malloc(sizeof(struct node));
  new_node->data = data;
  new_node->next = prev_node->next;
  prev_node->next = new_node;
}

void append(struct node **head, int data){
  struct node *new_node = (struct node *)malloc(sizeof(struct node));
  struct node * iter = *head;
  new_node->data = data;
  new_node->next = NULL;
  if(*head == NULL){
    *head = new_node;
    return;
  }
  while(iter->next != NULL){
    iter = iter->next;
  }
  iter->next = new_node;
}

void printLL(struct node *head){
  while(head != NULL){
    printf("%d -> ", head->data);
    head = head->next;
  }
  printf("NULL\n");
}

int main(){
  struct node * head = NULL;
  append(&head, 2);
  printLL(head);
  push(&head, 3);
  printLL(head);
  insertAfter(head, 5);
  printLL(head);
  return 0;
}
