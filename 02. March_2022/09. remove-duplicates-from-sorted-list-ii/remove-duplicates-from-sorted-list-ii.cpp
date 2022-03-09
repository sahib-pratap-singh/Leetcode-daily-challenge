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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* node=new ListNode(0);
        node->next=NULL;
        ListNode* result=node;
        while(head){
            bool isdupli=false;
            while(head->next and head->val==head->next->val){
                head=head->next;
                isdupli=true;
            }
            if(!isdupli){
                node->next=head;
                node=node->next;
            }
            else{
                node->next=NULL;
            }
            head=head->next;
        }
        return result->next;
    }
};