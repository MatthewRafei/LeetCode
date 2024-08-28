/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#include <stdio.h>

struct ListNode {
  int val;
  struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
  struct ListNode arr[6];
  struct ListNode *n = list1;
  int i = 0;

  // Get to the end of the first list
  while(n->next != NULL) {
    n = n->next;
  }

  // Combine lists
  n->next = list2;
  n = list1;
  i = 0;

  // Put list in array
  while(n != NULL) {
    arr[i++] = *n;
    n = n->next;
  }

  for(;i >= 0; i--) {
    printf("What is the value in the array at index %d : %d\n", i, arr[i]);
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
