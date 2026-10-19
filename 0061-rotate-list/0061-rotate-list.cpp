class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0)
            return head;

        // Find length and tail
        int len = 1;
        ListNode* tail = head;

        while (tail->next) {
            tail = tail->next;
            len++;
        }

        // Reduce unnecessary rotations
        k %= len;

        if (k == 0)
            return head;

      
        ListNode* slow = head;
        ListNode* fast = head;

        // Move fast k steps ahead
        for (int i = 0; i < k; i++) {
            fast = fast->next;
        }

        // Move both until fast reaches the tail
        while (fast->next) {
            slow = slow->next;
            fast = fast->next;
        }

        // Rotate the list
        ListNode* newHead = slow->next;
        slow->next = nullptr;
        fast->next = head;

        return newHead;
    }
};