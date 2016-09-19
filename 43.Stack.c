#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  int value;
  struct node *next;
} stack ;

int tos=-1;
void push(stack *head, int value);
void pop(stack *head);
void traverse(stack *head);

int main(){

  stack *HEAD = NULL;

  HEAD = malloc(sizeof(stack));

  HEAD->value = 0;
  HEAD->next = NULL;

  push(HEAD, 1);
  push(HEAD, 2);
  push(HEAD, 3);
  push(HEAD, 4);
  push(HEAD, 5);

  traverse(HEAD);
  printf("======After Pop=====\n");

  pop(HEAD);
  traverse(HEAD);

  return 0;
}

void push(stack *head, int value){
  stack *current = head;
  while(current->next != NULL){
    current = current->next;
  }
  current->next = malloc(sizeof(stack));
  current->next->value=value;
  current->next->next = NULL;
  tos++;
}

void pop(stack *head){
  stack *current = head, *upcoming = head->next;

  while(upcoming->next != NULL){
    upcoming = upcoming->next;
    current = current->next;
  }
  current->next = NULL;
  free(upcoming);
  tos--;
}

void traverse(stack *head){

  stack *current = head->next;

  while(current != NULL){
      printf("%d\t", current->value);
      current = current->next;
    }
printf("\n");

}
