// Title: Palindrome Linked List
            // Difficulty: Easy
            // Language: C
            // Link: https://leetcode.com/problems/palindrome-linked-list/

bool isPalindrome(struct ListNode* head) {
 */
 * };
    struct ListNode *temp = head;
    int count = 1;
    while (temp->next != NULL){
    if (head == NULL || head->next == NULL)
        return true;
        count++;
        temp = temp->next;
    }
