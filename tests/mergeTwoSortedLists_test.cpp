#include "mergeTwoSortedLists.h"
#include <gtest/gtest.h>

struct ListNode;
// Helper function to create a linked list from a vector of integers
ListNode* createLinkedList(const std::vector<int>& nums) {
    ListNode* dummy = new ListNode();
    ListNode* current = dummy;
    for (int num : nums) {
        current->next = new ListNode(num);
        current = current->next;
    }
    return dummy->next;
}

// Helper function to convert a linked list to a vector of integers
std::vector<int> linkedListToVector(ListNode* head) {
    std::vector<int> result;
    while (head != nullptr) {
        result.push_back(head->val);
        head = head->next;
    }
    return result;
}

// Test case 1: Merging two non-empty lists
TEST(MergeTwoSortedListsTest, HandlesCorrectInput1) {
    mergeTwoSortedLists solution;

    std::vector<int> list1 = {1, 2, 4};
    std::vector<int> list2 = {1, 3, 4};
    ListNode* l1 = createLinkedList(list1);
    ListNode* l2 = createLinkedList(list2);

    ListNode* mergedList = solution.mergeTwoLists(l1, l2);
    std::vector<int> expectedOutput = {1, 1, 2, 3, 4, 4};

    EXPECT_EQ(linkedListToVector(mergedList), expectedOutput);
}

// Test case 2: Both lists are empty
TEST(MergeTwoSortedListsTest, HandlesCorrectInput2) {
    mergeTwoSortedLists solution;

    ListNode* l1 = nullptr;
    ListNode* l2 = nullptr;

    ListNode* mergedList = solution.mergeTwoLists(l1, l2);
    std::vector<int> expectedOutput = {};

    EXPECT_EQ(linkedListToVector(mergedList), expectedOutput);
}

// Test case 3: One list is empty, and the other is not
TEST(MergeTwoSortedListsTest, HandlesCorrectInput3) {
    mergeTwoSortedLists solution;

    ListNode* l1 = nullptr;
    std::vector<int> list2 = {0};
    ListNode* l2 = createLinkedList(list2);

    ListNode* mergedList = solution.mergeTwoLists(l1, l2);
    std::vector<int> expectedOutput = {0};

    EXPECT_EQ(linkedListToVector(mergedList), expectedOutput);
}
