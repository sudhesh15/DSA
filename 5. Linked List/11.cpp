//Middle of the Linked List
class Solution {
public:
    int length(ListNode* head){
        int l=0;
        ListNode* temp = head;
        while(temp != nullptr){
            temp=temp->next;
            l++;
        }
        return l;
    }
    ListNode* middleNode(ListNode* head) {
        int nodeLength = length(head);
        int nodeMiddle = (nodeLength/2);
        ListNode* temp = head;

        for(int i=0;i<nodeMiddle;i++){
            temp=temp->next;
        }
        return temp;
    }
};