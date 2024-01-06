//Remove Nth Node From End of List
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* fast = head;

        for(int i=0;i<n;i++){
            fast = fast->next;
        }

        if(fast == nullptr){
            return head->next;
        }

        while(fast->next != nullptr){
            slow = slow->next;
            fast = fast->next;
        }

        slow->next = slow->next->next;
        return head;
    }
};