#ifndef MERGE_TWO_SORTED_LISTS_H
#define MERGE_TWO_SORTED_LISTS_H

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class mergeTwoSortedLists {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2);
};

#endif // MERGE_TWO_SORTED_LISTS_H
