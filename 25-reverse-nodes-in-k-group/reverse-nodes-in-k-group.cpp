class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        while (curr != NULL) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL || k == 1)
            return head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* nextNode = NULL;
        // ListNode* temp = head;
        while (true) {
            // ListNode* kth = prev;
            // for(int i=0; i<k && kth->next != NULL; i++){
            //     kth=kth->next;
            // }
            // if(kth == NULL) break;
            ListNode* kth = prev;
            for (int i = 0; i < k; i++) {
                kth = kth->next;
                if (kth == NULL)
                    return dummy->next;
            }

            ListNode* s = prev->next;
            ListNode* n = kth->next;
            kth->next = NULL;
            ListNode* na = reverse(s);
            prev->next = na;
            s->next = n;
            prev = s;
        }
        return dummy->next;
    }
};
