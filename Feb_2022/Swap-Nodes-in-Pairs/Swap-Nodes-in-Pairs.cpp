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
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* headNext=head->next;
        head->next=swapPairs(headNext->next);
        headNext->next=head;
        return headNext;
    }
};

//With modifying the values in the list's nodes

class Solution {
public:
    void swapadj(ListNode* &head){
        if(head==NULL || head->next==NULL){
            return;
        }
        swap(head->val,head->next->val);
        swapadj(head->next->next);
    }
    ListNode* swapPairs(ListNode* head) {
        swapadj(head);
        return head;
    }
};