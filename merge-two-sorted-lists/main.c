/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
n */

// Make sure both lists are not empty

#include <stdio.h>
#include <stdlib.h>

struct ListNode {
  int val;
  struct ListNode *next;
};

typedef struct ListNode Node;

Node* createNode(int num) {
  Node* node = malloc(sizeof(Node));
  node->val = num;
  node->next = NULL;
  return node;
}

void appendNode(Node* head, Node* node) {
  Node* n = head;
  while(n->next != NULL){
    n = n->next;
  }
  n->next = node;
}

Node* mergeTwoLists(Node* list1, Node* list2) {

  // Account for the possibility that lists may be empty
  if(list1 == NULL && list2 == NULL) {
    return NULL;
  }

  if(list1 == NULL) {
    return list2;
  }

  if(list2 == NULL) {
    return list1;
  }

  int arr[100];
  Node *n = list1;

  // Get to the end of the first list
  while(n->next != NULL) {
    n = n->next;
  }

  // Combine lists
  n->next = list2;

  // reset n to head
  n = list1;

  // Get size of combined linked list and put int elems into array
  int sizeOfList = 0;
  while(n != NULL) {
    arr[sizeOfList] = n->val;
    n = n->next;
    sizeOfList++;
  }
  
  int x = 0;
  for(int i = 0; i < sizeOfList; i++) {
    for(int j = i + 1; j < sizeOfList; j++) {
      if(arr[i] > arr[j]) {
        x = arr[i];
        arr[i] = arr[j];
        arr[j] = x;
      }
    }
  }

  for(int i = 0; i < sizeOfList; i++) {
    printf("What is the val in index %d in array : %d\n", i, arr[i]);
  }
  

  Node* head = createNode(arr[0]);

  for(int i = 1; i < sizeOfList; i++) {
    appendNode(head, createNode(arr[i]));
  }

  return head;
}

int main(void) {

  Node list1;
  Node list1_1;
  Node list1_2;
  
  list1.val = 1;
  list1_1.val = 2;
  list1_2.val = 4;

  list1.next = &list1_1;
  list1_1.next = &list1_2;
  list1_2.next = NULL;

  Node list2;
  Node list2_1;
  Node list2_2;

  list2.val = 1;
  list2_1.val = 3;
  list2_2.val = 4;

  list2.next = &list2_1;
  list2_1.next = &list2_2;
  list2_2.next = NULL;
  

  /* mergeTwoLists(&list1, &list2); */

  Node* n = mergeTwoLists(&list1, &list2);
  while(n != NULL) {
    printf("Value of node %d\n", n->val);
    n = n->next;
  }
  
  return 0;
}
