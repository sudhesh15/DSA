//Palindrome Linked List
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> array;
        ListNode* temp = head;

        while(temp != nullptr){
            array.push_back(temp->val);
            temp = temp->next;
        }

        int s=0, e=array.size()-1;
        while(s<e){
            if (array[s] != array[e]) {
                return false;
            } 
            s++;
            e--;
        }
        return true;
        
    }
};