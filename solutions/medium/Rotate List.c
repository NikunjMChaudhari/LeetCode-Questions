// Title: Rotate List
            // Difficulty: Medium
            // Language: C
            // Link: https://leetcode.com/problems/rotate-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if (head == NULL)
        return NULL;
    struct ListNode *tail = NULL, *temp = head, *last = head;
    int count = 1;
    while (last->next != NULL){
        last = last->next;
        count++;
    }
    k = k % count;
    if (k == 0 || head->next == NULL)
        return head;
    for (int i = 1; i < count - k; i++){
        temp = temp->next;
