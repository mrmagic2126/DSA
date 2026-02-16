class Solution {
public:
    ListNode* reverseList(ListNode* head) {
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
        if (head == NULL || k == 1) return head;

        ListNode dummy(0);
        dummy.next = head;

        ListNode* fina = &dummy;
        ListNode* meow = head;

        while (true) {
            ListNode* check = meow;
            int i = 0;
            while (i < k && check != NULL) {
                check = check->next;
                i++;
            }
            if (i < k) break;

            ListNode* temp = meow;
            ListNode* prevTail = fina;

            for (int j = 1; j < k; j++) {
                temp = temp->next;
            }

            ListNode* nextGroup = temp->next;
            temp->next = NULL;

            ListNode* dar = reverseList(meow);

            prevTail->next = dar;
            meow->next = nextGroup;

            fina = meow;
            meow = nextGroup;
        }

        return dummy.next;
    }
};
