#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  int value;
  struct node *next;
} node_t;

void addStart(node_t *head, int val);
void addEnd(node_t *head, int val);
void addPosition(node_t *head, int pos, int val);
void traverse(node_t *head);
void removeStart(node_t *head);
void removePosition(node_t *head, int pos);
void removeEnd(node_t *head);


int main(){

  node_t *HEAD = NULL;
  HEAD = malloc(sizeof(node_t));

  HEAD->value = 1;
  HEAD->next = NULL;
  addStart(HEAD, 2);
  addStart(HEAD, 3);
  addStart(HEAD, 4);
  addStart(HEAD, 5);
  addStart(HEAD, 6);
  addStart(HEAD, 7);
  addEnd(HEAD, 8);
  addEnd(HEAD, 9);
  addEnd(HEAD, 10);
  traverse(HEAD);
  printf("======After ADDING=====\n");
  addPosition(HEAD, 5, 33);
  traverse(HEAD);

  // removePosition(HEAD,4);
  // printf("======After Removing=====\n");
  // traverse(HEAD);

  return 0;
}




void addStart(node_t *head, int val){
  node_t *current = head, *temp;
  if(current->next == NULL){
    current->next = malloc(sizeof(node_t));
    current->next->value = val;
    current->next->next = NULL;
  }
  else{
    temp = current->next;
    current->next = malloc(sizeof(node_t));
    current->next->value = val;
    current->next->next = temp;
  }
}

void addEnd(node_t *head, int val){
  node_t *current = head;
  while(current->next != NULL){
    current = current->next;
  }
  current->next = malloc(sizeof(node_t));
  current->next->value=val;
  current->next->next = NULL;
}

void addPosition(node_t *head, int pos, int val){
  int i=0;
  node_t *current = head, *temp = malloc(sizeof(node_t));
  for(i=1;i<pos;i++){
  current = current->next;
  }

  temp->next = current->next;
  current->next= temp;
  temp->value = val;
}

void removeStart(node_t *head){
  node_t *current = head->next, *temp;
  temp = current->next;
  free(current);
  head->next = temp;

}

void removeEnd(node_t *head){
  node_t *current = head, *upcoming = head->next;

  while(upcoming->next != NULL){
    upcoming = upcoming->next;
    current = current->next;
  }
  current->next = NULL;
  free(upcoming);
}

void removePosition(node_t *head, int pos){
  int i=0;
  node_t *current = head, *temp, *upcoming;
  upcoming = current->next;
  for(i=1;i<pos;i++){
    upcoming = upcoming->next;
  current = current->next;
  }
  temp = upcoming->next;
  current->next = temp;
  free(upcoming);
}

void traverse(node_t *head){
  node_t *current = head->next;

  while(current != NULL){
      printf("%d\t", current->value);
      current = current->next;
    }
printf("\n");
}
