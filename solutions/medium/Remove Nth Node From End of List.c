// Title: Remove Nth Node From End of List
            // Difficulty: Medium
            // Language: C
            // Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/

        count++;
        temp = temp->next;
    while (temp->next != NULL){
    int count = 1;
    }
    count = count - n;
    temp = head;

    for (int i = 1; i < count; i++){
        temp = temp->next;
    }
    toDelete = temp->next;
    temp->next = toDelete->next;
    free(toDelete);


    if (count == 0)
        return head->next;
