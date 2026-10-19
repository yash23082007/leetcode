
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        //starting with the base
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        //  Find the middle
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        //  Split into two lists
        ListNode* second = slow->next;
        slow->next=NULL;
        

        // Sort both halves
        ListNode* left = sortList(head);
        ListNode* right = sortList(second);

        //  Merge the sorted halves
        return merge(left, right);
    }

    ListNode* merge(ListNode* a, ListNode* b) {
        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (a != nullptr && b != nullptr) {
            if (a->val <= b->val) {
                tail->next = a;
                a = a->next;
            } else {
                tail->next = b;
                b = b->next;
            }

            tail = tail->next;
        }

        // Attach the remaining nodes
        if (a != nullptr) {
            tail->next = a;
        } else {
            tail->next = b;
        }

        return dummy.next;
    }
};
