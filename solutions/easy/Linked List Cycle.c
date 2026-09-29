// Title: Linked List Cycle
            // Difficulty: Easy
            // Language: C
            // Link: https://leetcode.com/problems/linked-list-cycle/

    while (fast->next != NULL){
        if (fast->next->next == NULL)
            return false;
        fast = fast->next->next;
        slow = slow->next;
    struct ListNode *slow = head, *fast = head;
bool hasCycle(struct ListNode *head) {
 */
 * };
    if (head == NULL || head->next == NULL)
        return false;
