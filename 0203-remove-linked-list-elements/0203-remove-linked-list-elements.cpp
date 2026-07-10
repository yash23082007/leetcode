class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {

        // Create dummy node
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        // Start from dummy
        ListNode* curr = dummy;

        while (curr->next != NULL) {

            // If next node should be deleted
            if (curr->next->val == val) {

                // Skip the node
                curr->next = curr->next->next;
            }
            else {

                // Move forward
                curr = curr->next;
            }
        }

        return dummy->next;
    }
};