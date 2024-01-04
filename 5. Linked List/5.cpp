//Reverse a Linked List 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prevPtr = NULL;
        ListNode* currPtr = head;
        ListNode* nextPtr;

        while(currPtr != NULL){
            nextPtr = currPtr->next;
            currPtr->next = prevPtr;

            prevPtr = currPtr;
            currPtr = nextPtr;
        }

        return prevPtr;
    }
};