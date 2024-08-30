#include "mergeTwoSortedLists.h"

ListNode* mergeTwoSortedLists::mergeTwoLists(ListNode* list1, ListNode* list2) {

     if(list1 == nullptr) return list2;
     if(list2 == nullptr) return list1;

     // Create a dummy node to simplify the merge process
     ListNode* dummy = new ListNode();
     ListNode* current = dummy;

     // Merge the two lists
     while (list1 != nullptr && list2 != nullptr) {
          if (list1->val <= list2->val) {
               current->next = list1;
               list1 = list1->next;
          } else {
               current->next = list2;
               list2 = list2->next;
          }
          current = current->next;
     }

     // If one list is not empty, append the remaining elements
     if (list1 != nullptr) current->next = list1;
     if (list2 != nullptr) current->next = list2;

     // The merged list is next to the dummy node
     ListNode* head = dummy->next;
     delete dummy; // Free the memory allocated for the dummy node
     return head;
}
