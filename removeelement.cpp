/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
void removeelement(ListNode* &head,int d){
    if(head==nullptr){
        return;
    }
    if(head->val==d){
        head=head->next;
        removeelement(head,d);
    }
    else{
    removeelement(head->next,d);
    }
}
class Solution {
public:
    ListNode* removeElements(ListNode* &head, int val) {
        removeelement(head,val);
        return head;
    }
};