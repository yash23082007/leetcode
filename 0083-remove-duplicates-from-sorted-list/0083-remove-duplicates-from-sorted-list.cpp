class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        // Empty list
        if (head == NULL)
            return head;

        ListNode* curr = head;

        while (curr->next != NULL) {

            // Duplicate found
            if (curr->val == curr->next->val) {

                // Skip duplicate node
                curr->next = curr->next->next;
            }
            else {

                // Move to next node
                curr = curr->next;
            }
        }

        return head;
    }
};