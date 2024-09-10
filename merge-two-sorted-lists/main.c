/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
n */

// Make sure both lists are not empty

#include <stdio.h>

struct ListNode {
  int val;
  struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {

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

  struct ListNode *arr[100];
  struct ListNode *n = list1;

  // Get to the end of the first list
  while(n->next != NULL) {
    n = n->next;
  }

  // Combine lists
  n->next = list2;

  int sizeOfList = 0;
  while(n->next != NULL) {
    n = n->next;
    sizeOfList++;
  }


  struct ListNode *min = NULL;

  n = list1;
  
  while(sizeOfList > 0) {

    if(n == NULL){
      n = list1;
    }

    
    
  }
  

  
    
    

  
}

int main(void) {

  struct ListNode list1;
  struct ListNode list1_1;
  struct ListNode list1_2;
  
  list1.val = 1;
  list1_1.val = 2;
  list1_2.val = 4;

  list1.next = &list1_1;
  list1_1.next = &list1_2;
  list1_2.next = NULL;

  struct ListNode list2;
  struct ListNode list2_1;
  struct ListNode list2_2;

  list2.val = 1;
  list2_1.val = 3;
  list2_2.val = 4;

  list2.next = &list2_1;
  list2_1.next = &list2_2;
  list2_2.next = NULL;
  

  mergeTwoLists(&list1, &list2);
  
  return 0;
}
