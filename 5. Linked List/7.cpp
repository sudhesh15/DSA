//Merge Two Sorted Lists
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummyNode = new ListNode(-1);
        ListNode* ptr1 = list1;
        ListNode* ptr2 = list2;
        ListNode* ptr3 = dummyNode;

        while(ptr1 != nullptr && ptr2 != nullptr){
            if(ptr1->val < ptr2->val){
                ptr3->next = ptr1;
                ptr1=ptr1->next;
            }else{
                ptr3->next = ptr2;
                ptr2=ptr2->next;
            }
            ptr3=ptr3->next;
        }
        if (ptr1 != nullptr) {
            ptr3->next = ptr1;
        } else {
            ptr3->next = ptr2;
        }
        return dummyNode->next;
    }
};